//
// Created by matt on 2022/1/3.
//

#include <iostream>

using namespace std;

const int N = 1e5 + 10;
int p[N];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) p[i] = i;
    char op[2];
    int a, b;
    while (m--) {
        cin >> op >> a >> b;
        if (op[0] == 'M') {
            if (find(a) != find(b)) p[find(b)] = p[find(a)];
        } else {
            if (find(a) == find(b)) cout << "Yes" << endl;
            else cout << "No" << endl;
        }
    }

    return 0;
}