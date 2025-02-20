/*  Pattern
    A B C D E
    A B C D
    A B C
    A B 
    A
*/

#include <iostream>

using namespace std;

void print(int n) {
    for (int i=0; i<n; i++) {
        for (char ch = 'A'; ch < 'A' + n - i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main() {
    print(5);
    return 0;
}