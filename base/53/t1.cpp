#include <iostream>

using namespace std;

int main() {
    int s = 0;
    for (int i = 1; i <= 111; i++) {
        for (int j = i; j; j /= 10) {
            if (j % 10 == 0) s++;
        }
    } 
    cout << s;
}