#include <iostream>
#include <queue>

using namespace std;

class A {
public:
    int age;
    string name;

    A(int _age, string _name) : age(_age), name(_name) {}

    A() {}
};

struct B {
    int a, b;
    bool operator> (const B& t) const {
        return a > t.a;
    }
    B(int _a,int _b) : a(_a), b(_b){}
};

int main() {
    A a;
    cout << a.age;
    queue<int> q({1, 2, 3});
    priority_queue<int> pq;
    pq.push(-1);
    pq.push(100);
    cout << pq.top();

    cout << endl << endl;


    priority_queue<int, vector<int>, greater<int>> maxq;
    maxq.push(1);
    maxq.push(2);
    maxq.push(-1);
    cout << "小顶堆" << maxq.top() << endl;

    priority_queue<B, vector<B>, greater<B>> bq;
    B b1(1, 2);
    B b2(2, 3);
    B b3(-2, 100);
    bq.push(b1);
    bq.push(b2);
    bq.push(b3);
    //bq.pop();
    cout << (bq.top().a);

    return 0;
}