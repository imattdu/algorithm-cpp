#include <iostream>

using namespace std;
const int N = 1010;
int f[N][N], n, m;
string a, b;

int main() {
    scanf("%d %d", &n, &m);
    cin >> a >> b;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            f[i][j] = max(f[i -1][j], f[i][j - 1]);
            if (a[i - 1] == b[j - 1]){
                f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
            }
        }
    }

    cout << f[n][m];
    return 0;
}