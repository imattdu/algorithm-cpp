#include <bits/stdc++.h>

using namespace std;
const int N = 13;
char g[N][N];
bool col[N], dg[2 * N], udg[2 * N];
int n;

void dfs(int u) {
    if (u == n) {
        for (int i = 0; i < n; i++) printf("%s\n", g[i]);
        puts("");
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!col[i] && !dg[i - u + n] && !udg[i + u]) {
            col[i] = dg[i - u + n] = udg[i + u] = true;
            g[u][i] = 'Q';
            dfs(u + 1);
            col[i] = dg[i - u + n] = udg[i + u] = false;
            g[u][i] = '.';
        }
    }

}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) for (int j = 0; j < n; j++) g[i][j] = '.';
    dfs(0);
    return 0;
}
