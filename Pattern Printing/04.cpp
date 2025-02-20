/*  Pattern
    1
    22
    333
    4444
    55555
*/

#include <iostream>

using namespace std;

void print2(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<=i; j++) {
            cout << i + 1;
        }
        cout << endl;
    }
}

int main() {
    print2(5);
}