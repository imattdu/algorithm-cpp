#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1e5 + 10;
int p[N], s[N];

int find(int x) {
    if (p[x] != x) p[x] = find(p[x]);
    return p[x];
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++) {
        p[i] = i, s[i] = 1;
    }
    string op;
    int a, b;
    while (m--) {
        scanf("%s", op);
        cout << op << endl;
        if (op == "C") {
            scanf("%d %d", &a, &b);
            if (find(a) != find(b)) {
                s[find(b)] += s[find(a)];
                p[find(a)] = find(b);
            }

        } else if (op == "Q1") {
            scanf("%d %d", &a, &b);
            if (find(a) == find(b)) printf("Yes\n");
            else printf("No\n");
        } else {
            scanf("%d", &a);
            printf("%d\n", s[find(a)]);
        }
    }





}
