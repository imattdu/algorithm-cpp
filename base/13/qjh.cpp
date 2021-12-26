#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int N = 3e5 + 10;
typedef pair<int, int> PII;
vector<int> alls;
vector<PII> add, query;
int a[N], s[N];


int find(int x) {
    int l = 0, r = alls.size() - 1;
    while (l < r) {
        int mid = l + r >> 1;
        if (alls[mid] >= x) r = mid;
        else l = mid + 1;
    }
    return r + 1;
}

int main() {
    int n, m;
    cin >> n >> m;
    while(n--) {
        int x, c;
        cin >> x >> c;
        add.push_back({x, c});
        alls.push_back(x);
    }
    while (m--) {
        int l, r;
        cin >> l >> r;
        query.push_back({l, r});
        alls.push_back(l), alls.push_back(r);
    }
    sort(alls.begin(), alls.end());
    alls.erase(unique(alls.begin(), alls.end()), alls.end());

    for (auto item : add) {
        int x = find(item.first);
        a[x] += item.second;
    }

    for (int i = 1; i <= alls.size(); i++) s[i] = s[i - 1] + a[i];



    for (auto item : query) {
        int l = find(item.first), r = find(item.second);

        cout << (s[r] - s[l - 1]) << endl;
    }


    return 0;
}