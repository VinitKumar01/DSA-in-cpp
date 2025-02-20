/*  Pattern
    1      1
    12    21
    123  321
    12344321
*/
#include <iostream>

using namespace std;

void print(int n) {
    for (int i=1; i<=n; i++) {
        for (int j=0; j<i; j++) {
            cout << j+1;
        }
        for (int j=0; j<2*(n-i); j++) {
            cout << " ";
        }
        for (int j=i; j>=1; j--) {
            cout << j;
        }
        cout << endl;
    }
}

int main() {
    print(4);
    return 0;
}