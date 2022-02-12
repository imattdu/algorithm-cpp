//
// Created by matt on 2022/1/17.
//
#include <iostream>
#include <deque>

using namespace std;

int main() {
    deque<int> d({1, 2, 3});
    cout << d[0];
    d = {1, 2, 3};
    return 0;
}

