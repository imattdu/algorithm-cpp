#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

const int N = 12, M = 1 << N;//M的每一位二进制位储存一种状态

int n, m;
long long f[N][M];
bool st[M];//储存每一列上合法的摆放状态

//f[i][j]表示摆放第i列，第i-1列向后伸出来横着的方格状态为j，的方案数，j为一个二进制数，用01表示是否戳出来
int main() {
    while (cin >> n >> m, n || m) {
        //枚举每一列的占位状态里哪些是合法的
        for (int i = 0; i < 1 << n; i++)//一共n行，枚举n位不同的状态
        {
            int cnt = 0;//用来记录连续的0的个数
            st[i] = true;//记录这个状态被枚举过且可行
            for (int j = 0; j < n; j++)//从低位到高位枚举它的每一位
                if (i >> j & 1)//如果为1
                {
                    if (cnt & 1) st[i] = false;//如果之前连续0的个数是奇数，竖的方块插不进来，这种状态不行
                    cnt = 0;//清空计数器
                } else cnt++;//如果不为1，计数器+1
            if (cnt & 1) st[i] = false;//到末尾再判断一下前面0的个数是否为奇数，同前
        }

        memset(f, 0, sizeof f);//一定要记得初始化成0，对于每个新的输入要重新计算f[N][M]
        f[0][0] = 1;
        for (int i = 1; i <= m; i++)//对于每一列
            for (int j = 0; j < 1 << n; j++)//枚举j的状态
                for (int k = 0; k < 1 << n; k++)//再枚举前一行的伸出状态k
                    if ((j & k) == 0 && st[j | k])//如果它们没有冲突，i这一列被占位的情况也是合法的话
                        f[i][j] += f[i - 1][k];//那么这种状态下它的方案数等于之前每种k状态数目的和

        cout << f[m][0] << endl;//求的是第m-1行排满，并且第m-1行不向外伸出块的情况
        //0~m-1行是题目中可以摆方块的范围
    }
    return 0;
}

