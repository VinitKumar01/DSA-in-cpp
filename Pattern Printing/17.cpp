/*  Pattern
   A   
  ABA  
 ABCBA 
ABCDCBA
*/

#include <iostream>

using namespace std;

void print(int n) {
    for (int i=0; i<n; i++) {
        for (int j = 0; j< n - (i + 1); j++) {
            cout << " ";
        }
        //int loop = 1;
        // for (char j = 'A'; j <= 'A' + 2*i; j += loop) {
        //     cout << j;
        //     if ( j == 'A' + i && 'A' + i != 'A') loop = -1;
        //     if ( j== 'A' && loop == -1 ) break;
        // }
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for (int j=0; j<= 2*i; j++) {
            cout << ch;
            if (j < breakpoint) ch++;
            else ch --;
        }
        for (int j = 0; j< n - (i + 1); j++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    print(4);
    return 0;
}