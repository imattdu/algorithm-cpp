//
// Created by matt on 2022/1/2.
// input
/*
5
I abc
Q abc
Q ab
I ab
Q ab
 * */
#include <iostream>
#include <cstdio>

using namespace std;

const int N = 1e5 + 10;
int son[N][26], cnt[N], idx;
char str[N];

void insert(char str[]) {

    int p = 0;
    for (int i = 0; str[i]; i++) {
        int u = str[i] - 'a';
        if (!son[p][u]) son[p][u] += ++idx;
        p = son[p][u];
        // cout << p << ':' << son[p][u] << endl;
    }
    cnt[p]++;
}

int query(char str[]) {
    int p = 0;
    for (int i = 0; str[i]; i++) {
        int u = str[i] - 'a';
        if (!son[p][u]) return 0;
        p = son[p][u];
    }
    return cnt[p];
}

int main(){
    int n;
    scanf("%d", &n);
    char ch;

    while (n--) {

        cin >> ch >> str;
        if (ch == 'I') insert(str);
        else cout << query(str) << endl;
    }

}