#include <iostream>

using namespace std;

class A {
public:
    int a, b, c;
    string name;

public:
    A(int _a, int _b, int _c) : a(_a), b(_b), c(_c) {}


};

int main() {
    A a1 = A(1, 2, 3);

}