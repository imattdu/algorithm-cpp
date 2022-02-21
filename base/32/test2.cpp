#include <iostream>

using namespace std;

struct A {
    int a, b, c;
}a1;

int main() {
    a1 = {a: 1, c:2};
    cout << a1.c;
    return 0;
}