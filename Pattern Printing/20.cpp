/*  Pattern
    *        *
    **      **
    ***    ***
    ****  ****
    **********
    ****  ****
    ***    ***
    **      **
    *        *
*/

#include <iostream>

using namespace std;

void print(int n) {
    for (int i=0; i<2*n -1; i++) {
        for (int j=0; j<=i and i<n; j++) {
            cout << "*";
        }

        for (int j=0; j < 2*(n-i-1) and i<n; j++) {
            cout << " ";
        }

        for (int j=0; j<=i and i<n; j++) {
            cout << "*";
        }


        for (int j=0; j< 2*n -(i + 1) and i>=n; j++) {
            cout << "*";
        }

        for (int j=0; j < 2*((i+1)-n) and i>=n; j++) {
            cout << " ";
        }

        for (int j=0; j< 2*n -(i + 1) and i>=n; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    print(5);
    return 0;
}