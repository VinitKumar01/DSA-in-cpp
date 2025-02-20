/*  Pattern
    12345
    1234
    123
    12
    1
*/

#include <iostream>

using namespace std;

// void print2(int n) {
//     for (int i=n; i>0; i--) {
//         for (int j=0; j<=i-1; j++) {
//             cout << j + 1;
//         }
//         cout << endl;
//     }
// }

void print2(int n) {
    for (int i = 0; i<n; i++) {
        for (int j = 0; j< n-i; j++) {
            cout << j + 1;
        }
        cout << endl;
    }
}

int main() {
    print2(5);
}