//
// Created by matt on 2022/1/3.
//
#include <iostream>
#include <cstdio>

using namespace std;

const int N  = 1e5 + 10;
int h[N], ph[N], hp[N], cnt;

void heap_swap(int a, int b) {
    swap(ph[hp[a]], ph[hp[b]]);
    swap(hp[a], hp[b]);
    swap(h[a], h[b]);
}

void up(int u) {
    if (u / 2 && h[u / 2] > h[u]) {
        heap_swap(u, u / 2);
        up(u >> 1);
    }
}

void down(int u) {
    int t = u;
    if (2 * u <= cnt && h[2 * u] < h[t]) t = 2 * u;
    if (2 * u + 1 <= cnt && h[2 * u + 1] < h[t]) t = 2 * u + 1;
    if (u != t) {
        heap_swap(u, t);
        down(t);
    }
}



int main() {
    int n, m = 0;
    scanf("%d", &n);
    string op;
    int k, x;
    while (n--) {
        cin >> op;
        if (op == "I") {
            cin >> x;
            m++;
            h[++cnt] = x;
            ph[m] = cnt;
            hp[cnt] = m;
            up(cnt);
        } else if (op == "PM") printf("%d\n", h[1]);
        else if (op == "DM") {
            heap_swap(1, cnt);
            //h[1] = h[cnt--];
            cnt--;
            down(1);
        } else if (op == "D") {
            scanf("%d", &k);
            int u = ph[k];
            heap_swap(ph[k], cnt);
            // h[ph[k]] = h[cnt--];
            cnt--;
            down(u);
            up(u);
        } else if (op == "C") {
            scanf("%d %d" , &k, &x);
            h[ph[k]] = x;
            down(ph[k]);
            up(ph[k]);
        }
    }

    return 0;
}
