#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;
const int N = 510, M = 1e5 + 10;
struct Edge {
    int a, b, w;
} e[M];
int dist[N], back[N];
int n, m, k;

void bellman_ford() {
    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;
    for (int i = 0; i < k; i++) {
        memcpy(back, dist, sizeof dist);
        for (int j = 0; j < m; j++) {
            int a = e[j].a,  b = e[j].b,  w = e[j].w;
            dist[b] = min(dist[b], back[a] + w);
        }

    }

    if (dist[n] > 0x3f3f3f / 2) puts("impossible");
    else printf("%d", dist[n]);
}

int main() {
    scanf("%d%d%d", &n, &m, &k);
    for (int i = 0; i < m; i++) {
        int a, b, w;
        scanf("%d%d%d", &a, &b, &w);
        e[i] = {a, b, w};
    }
    bellman_ford();
    return 0;
}