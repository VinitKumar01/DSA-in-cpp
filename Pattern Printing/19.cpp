/*  Pattern
    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********
*/

#include <iostream>

using namespace std;

void print(int n) {
    for (int i=0; i<2*n; i++) {
        for (int j=0; j<n - i; j++) {
            cout << "*";
        }
        for (int j=0; j<2*i && i<n; j++) {
            cout << " ";
        }
        for (int j=0; j<n - i; j++) {
            cout << "*";
        }
        

        for (int j=n; j<=i; j++) {
            cout << "*";
        }
        for (int j=0; j< 2*(2*n - (i+1)) && i>=n; j++) {
            cout << " ";
        }
        for (int j=n; j<=i; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    print(5);
    return 0;
}