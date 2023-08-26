//
// Created by matt on 2023/7/9.
//

#include <iostream>

using namespace std;

int main() {
    int i = 10;
    cin >> i;
    if (i < 0) {
        cout << -1;
    } else if (i > 0) {
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}