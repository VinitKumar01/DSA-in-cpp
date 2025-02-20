/*  Pattern
    E
    DE
    CDE
    BCDE
    ABCDE
*/

#include <iostream>

using namespace std;

void print(int n) {
    for (int i=1; i<=n;i++) {
        for (char j='A'; j< 'A' + i; j++) {
            cout << (char)(j + n-i)<< " "; 
        }
        cout << endl;
    }
}

int main() {
    print(5);
    return 0;
}