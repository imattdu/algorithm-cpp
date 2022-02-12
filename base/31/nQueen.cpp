#include <iostream>

using namespace std;
const int N = 12;
char g[N][N];
bool row[N], dg[2 * N], udg[2 * N];
int n;

void dfs(int u) {
    if (u == n) {
        for (int i = 0; i < n; i++) {
            puts(g[i]);
        }
        puts("");
        return;
    }
    for (int i = 0; i < n; i++) {
        if (!row[i] && !dg[n - u + i] && !udg[u + i]) {
            row[i] = dg[n - u + i] = udg[u + i] = true;
            g[u][i] = 'Q';
            dfs(u + 1);
            g[u][i] = '.';
            row[i] = dg[n - u + i] = udg[u + i] = false;
        }
    }
}

int main() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) g[i][j] = '.';
    }
    dfs(0);
    return 0;
}