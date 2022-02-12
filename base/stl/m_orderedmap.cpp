//
// Created by matt on 2022/1/30.
//

#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<char, int> m1{{'a', 1}, {'b', 2}};
    for (auto it = m1.begin(); it != m1.end(); it++) {
        cout << it->first << " ";
        cout << it->second;
        puts("");
    }


    return 0;
}