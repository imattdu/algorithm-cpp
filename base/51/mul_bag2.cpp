#include <iostream>

using namespace std;
const int N = 11 * 2000 + 10, M = 2010;
int n, m, v[N], w[N], f[N];

int main() {
    cin >> n >> m;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int a, b, c, k = 1;
        cin >> a >> b >> c;
        while (k <= c) {
            cnt++;
            v[cnt] = k * a;
            w[cnt] = k * b;
            c -= k;
            k *= 2;
        }
        if (c > 0) {
            cnt++, v[cnt] = c * a, w[cnt] = c * b;

        }
    }

    for (int i = 1; i <= cnt; i++) {
        for (int j = m; j >= v[i]; j--) {
            f[j] = max(f[j], f[j - v[i]] + w[i]);
        }
    }

    cout << f[m];
    return 0;
}