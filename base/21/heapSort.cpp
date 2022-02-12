//
// Created by matt on 2022/1/3.
//
#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1e6 + 10;
int h[N], cnt;
int n, m;

void up(int u) {
    if (u / 2 && h[u / 2] > h[2]) {
        swap(h[u / 2], h[u]);
        up(u >> 1);
    }
}

void down(int u) {
    int t = u;
    if (2 * u <= cnt && h[2 * u] < h[t]) t = 2 * u;
    if (2 * u + 1 <= cnt && h[2 * u + 1] < h[t]) t = 2 * u + 1;
    if (u != t) {
        swap(h[u], h[t]);
        down(t);
    }
}

//

int main() {
    scanf("%d %d", &n, &m);
    cnt = n;
    for (int i = 1; i <= n; i++) scanf("%d", &h[i]);
    for (int i = n / 2; i; i--) down(i);
    while (m--) {
        printf("%d ", h[1]);
        h[1] = h[cnt--];
        down(1);
    }
    puts("");
    return 0;
}