#include <iostream>

using namespace std;

const int N = 1e5 + 10;
int a[N], b[N];

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];


    for (int i = 0, j = m - 1; i < n; i++) {
        // 注意> j-- 不一定每次都需要--
        while (j >= 0 && a[i] + b[j] > x){
            j--;
        }

        if (j >= 0 && a[i] + b[j] == x) {
            cout << i << ' ' << j;
            break;
        }
    }
    return 0;
}