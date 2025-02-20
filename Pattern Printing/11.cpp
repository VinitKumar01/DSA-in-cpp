/*  Pattern
    1
    01
    101
    0101
    10101
*/

#include <iostream>

using namespace std;

// void print2(int n) {
//     for (int i=1; i<=n; i++) {
//         int number = (i+1)%2 == 0;
//         for(int j=0; j<i;j++) {
//             cout << number;
//             number = !number;
//         }
//         cout << endl;
//     }
// }

void print(int n) {
    int start;
    for (int i=1; i<=n; i++) {
        if (i%2 == 0) start = 0;
        else start = 1;
        for(int j=0; j<i;j++) {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}

int main() {
    print(5);
}