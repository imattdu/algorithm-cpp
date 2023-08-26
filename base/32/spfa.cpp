#include <bits/stdc++.h>

using namespace std;
const int N = 1e5 + 10;
int h[N], e[N], ne[N], w[N], idx, n, m, d[N];
bool st[N];

void add(int a, int b, int c) {
    w[idx] = c, e[idx] = b, ne[idx] = h[a], h[a] = idx++;
}

void spfa() {
    memset(d, 0x3f, sizeof d);
    queue<int> q;
    q.push(1);
    d[1] = 0;
    st[1] = true;
    while (q.size()) {
        auto t = q.front();
        q.pop();
        st[t] = false;
        for (int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            if (d[t] + w[i] < d[j]) {
                d[j] = d[t] + w[i];
                if (!st[j]) {
                    st[j] = true;
                    q.push(j);
                }

            }
        }
    }
    if (d[n] == 0x3f3f3f3f) puts("impossible");
    else cout << d[n];
}

int main() {
    cin >> n >> m;
    memset(h, -1, sizeof h);
    int a, b, c;
    while (m--) {
        scanf("%d%d%d", &a, &b, &c);
        add(a, b, c);
    }
    spfa();
    return 0;

}