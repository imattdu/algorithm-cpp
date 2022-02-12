#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct A {
    int age;
    string name;
    A(int _age) {
        age = _age;
    }
};

class B {
public:
    int age;
    string name;
    B() {

    }
    B(int _age) {
        age = _age;
    }
};

int main() {
    vector<int> v;
    v = {1, 2};
    queue<int> q({1, 2, 3});
    // 错误
    //q = {1, 2};
    A a = {1};
    a.age = 17;
    cout << a.age << endl;

    B b = {1};
    cout << b.age;

    int i = 10;
    int* j = &i;
    return 0;
}