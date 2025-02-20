/*  Pattern
*********
 *******
  *****  
   ***   
    *    
*/
#include <iostream>

using namespace std;

void print(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            cout << " ";
        }
        for (int k=0; k<(n-i)*2 - 1; k++) {
            cout << "*";
        }
        for (int j=0; j<i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    print(5);
    return 0;
}