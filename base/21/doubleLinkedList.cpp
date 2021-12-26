//
// Created by matt on 2021/12/27.
//

#include <iostream>

using namespace std;

const int N = 1e5 + 10;
int e[N], l[N], r[N], idx;

// k insert right
// add(l[k], x);
void add(int k, int x) {
    e[idx] = x;
    r[idx] = r[k];
    l[idx] = k;
    l[r[k]] = idx;
    r[k] = idx;
    idx++;
}

// 删除第k个点
void remove(int k) {
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}
