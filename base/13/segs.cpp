//
// Created by matt on 2021/12/25.
//

// 一个片段
// 区间合并

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef pair<int, int> PII;

vector<PII> segs;

void merge(vector<PII> &segs) {
    vector<PII> res;
    sort(segs.begin(), segs.end());
    int st = -2e9, ed = -2e9;
    for (auto seg : segs) {
        if (ed < seg.first) {
            if (st != -2e9) res.push_back({st, ed});
            st = seg.first;
            ed = seg.second;
        } else ed = max(ed, seg.second);
    }
    // 最后一个else 情况 没合并
    if (st != -2e9) res.push_back({st, ed});
    segs = res;

}

int main() {
    int n;
    cin >> n;
    while (n--) {
        int st, ed;
        cin >> st >> ed;
        segs.push_back({st, ed});
    }
    merge(segs);
    cout << segs.size();

}