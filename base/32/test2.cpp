#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>


using namespace std;
const int N = 150010;
typedef pair<int, int> PII;
int h[N], e[N], ne[N], w[N], idx;
int n, m;
int dist[N];
bool st[N];

void add(int a, int b, int c) {
    e[idx] = b, w[idx] = c, ne[idx] = h[a], h[a] = idx++;
}

int dijkstra() {
    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;
    priority_queue<PII, vector<PII>, greater<PII>> q;


    return dist[n];
}

int main() {
    cin >> n >> m;
    memset(h, 0x3f, sizeof h);
    while (m--) {
        int a, b, c;
        add(a, b, c);
    }
}