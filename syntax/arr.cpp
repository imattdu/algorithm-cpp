//
// Created by matt on 2023/7/9.
//

# include <iostream>
# include <cstring>

using namespace std;

int a2[10];

void out(int a[10]) {
    for (int i = 0; i < 10; i++) {
        cout << a[i] << endl;
    }
}

int main() {
    int a1[10];
    //out(a1);
    //out(a2);
    int a3[10][10] = {
            {
                    1, 2, 3
            }
    };
    int a4[3] = {1, 2, 3};
    int a5[3] = {3, 3, 3};
    memset(a4, -1, sizeof a4);
    cout << a4[0] << endl;
    cout << sizeof a5;
    printf("%x\n", a4[0]);
    memcpy(a5, a4, sizeof a4);
    cout << a5[0];
    return 0;
}