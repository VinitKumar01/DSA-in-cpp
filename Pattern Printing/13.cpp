/*  Pattern
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
*/

#include <iostream>

using namespace std;

void print(int n) {
    int number = 1;
    for (int i=1; i<=n; i++) {
        for (int j=0; j<i; j++) {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}

int main() {
    print(5);
    return 0;
}