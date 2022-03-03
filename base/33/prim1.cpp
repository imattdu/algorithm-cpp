#include <iostream>
#include <cstring>

using namespace std;
const int N = 510, INF = 0x3f3f3f3f;
int g[N][N], dist[N];
bool st[N];
int n, m;

int prim() {
    memset(dist, 0x3f, sizeof dist);
    int res = 0;
    for (int i = 0; i < n; i++) {
        int t = -1;
        for (int j = 1; j <= n; j++) {

            if (!st[j] && (t == -1 || dist[j] < dist[t])) {
                t = j;
            }
        }
        if (i && dist[t] == INF) return INF;
        if (i) res += dist[t];
        st[t] = true;
        for (int j = 1; j <= n; j++) dist[j] = min(dist[j], g[t][j]);

    }
    return res;
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i != j) g[i][j] = INF;
        }
    }

    while (m--) {
        int a, b, w;
        cin >> a >> b >> w;
        g[a][b] = g[b][a] = min(g[a][b], w);
    }
    int res = prim();
    if (res == INF) puts("impossible");
    else cout << res;
}