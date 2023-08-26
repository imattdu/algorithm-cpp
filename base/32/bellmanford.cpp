#include <bits/stdc++.h>

using namespace std;
const int N = 510, M = 1e5 + 10;
struct Edge {
    int a, b, w;
}e[M];
int n, m, k, dist[N], back[N];

void bellman_ford() {
    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;
    for (int i = 0; i < k; i++) {
        memcpy(back, dist, sizeof dist);
        for (int j = 0; j < m; j++) {
            int a = e[j].a, b = e[j].b, w = e[j].w;
            dist[b] = min(dist[b], back[a] + w);
        }
        if (dist[n] > 0x3f3f3f3f / 2) puts("impossible");
        else cout << dist[n];
    }
}

int main() {
    cin >> n >> m >> k;
    int a, b, w;
    for (int i = 0; i < m; i++) {
        scanf("%d%d%d", &a, &b, &w);
        e[i] = {a, b, w};
    }
    bellman_ford();
    return 0;
}