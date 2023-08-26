#include <bits/stdc++.h>

using namespace std;
const int N = 1e6 + 10;
int primes[N], cnt;
bool st[N];

void get_primes(int n) {
    for (int i = 2; i <= n; i++) {
        if (st[i]) continue;
        primes[cnt++] = i;
        for (int j = i + i; j <= n; j += i) {
            st[j] = true;
        }
    }
    cout << cnt;

}

int main() {
    int n;
    cin >> n;
    get_primes(n);
    return 0;
}

