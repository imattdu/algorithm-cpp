//
// Created by matt on 2021/12/27.
//

#include <iostream>

using namespace std;

const int N = 1e5;
int head, e[N], ne[N], idx;

void init() {
    head = -1;
    idx = 0;
}

// x 插入到头节点
void add_to_head(int x) {
    e[idx] = x;
    ne[idx] = head;
    head = idx++;
}

void add(int k, int x) {
    e[idx] = x;
    ne[idx] = ne[k];
    ne[k] = idx++;
}

void remove(int k) {
    ne[k] = ne[ne[k]];
}

