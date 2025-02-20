/*  Pattern
    A 
    B B 
    C C C
    D D D D  
    E E E E E
*/

#include <iostream>

using namespace std;

void print(int n) {
    char ch = 'A';
    for (int i=1; i<=n; i++) {
        for (int j=0; j<i; j++) {
            cout << ch << " ";
        }
        cout << endl;
        ch +=1;
    }

}

int main() {
    print(5);
    return 0;
}