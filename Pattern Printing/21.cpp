/*  Pattern
    * * * *

    *     *

    *     *

    * * * *
*/

#include <iostream>

using namespace std;

void print(int n) {
    // for (int i=1; i<=n; i++) {
    //     if (i==1) {
    //         for (int j=0; j< n; j++) {
    //             cout << "*" << " ";
    //         }
    //     } else if (i>1 and i<n) {
    //         cout << "*" << " ";
    //         for (int j=0; j<n-2; j++) {
    //             cout << " " << " ";
    //         }
    //         cout << "*" << " ";
    //     } else {
    //         for (int j=0; j< n; j++) {
    //             cout << "*" << " ";
    //         }
    //     }
    //     cout << endl;
    //     cout << endl;

    // }
    for (int i =0; i<n; i++) {
        for (int j = 0; j<n; j++) {
            if (i == 0 || j == 0 || i == n-1 || j == n-1) {
                cout << "*";
            } else cout << " ";
        }
        cout << endl;
    }
}

int main() {
    print(4);
    return 0;
}