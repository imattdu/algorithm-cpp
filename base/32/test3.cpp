#include <iostream>
#include <cstring>

using namespace std;
const int N = 510, M = 1e5 + 10;

struct Edge {
    int a, b, w;
} e[M];
int n, m, k;
int dist[N], back[N];

void bellman_ford() {
    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;
    for (int i = 0; i < k; i++) {
        memcpy(back, dist, sizeof dist);
        for (int i = 0; i < m; i++) {
            int a = e[i].a, b = e[i].b, w = e[i].w;
            dist[b] = min(dist[b], back[a] + w);
        }
    }
    if (dist[n] > 0x3f3f3f3f / 2) cout << "impossible";
    else cout << dist[n];
}

int main() {
    cin >> n >> m >> k;
    for (int i = 0; i < m; i++) {
        int a, b, w;
        cin >> a >> b >> w;
        e[i] = {a, b, w};
    }
    bellman_ford();

    return 0;
}