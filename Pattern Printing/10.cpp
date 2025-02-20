/*  Pattern
        *        
        **      
        ***    
        **** 
        *****
        **** 
        ***  
        **   
        *    
*/
#include <iostream>

using namespace std;

// void print(int n) {
//     int stars = n;
//     for (int i=0; i<stars; i++) {
//         for (int k=0; k<i + 1; k++) {
//             cout << "*";
//         }
//         for (int j=0; j<n-(i+1); j++) {
//             cout << " ";
//         }
//         cout << endl;
//     }
//     stars--;
//     for (int i=0; i<stars; i++) {
//         for (int k=0; k<(stars-i); k++) {
//             cout << "*";
//         }
//         for (int j=0; j<n-(i+1); j++) {
//             cout << " ";
//         }
//         cout << endl;
//     }
// }

void print(int n) {
    for (int i=1; i<= n*2 -1; i++) {
        int stars = i;
        if (i>n) stars = 2*n -i;
        for (int j=0; j<stars; j++) {
            cout << "*";
        }
        for (int k=0; k<n-(i+1); k++) {
            cout << " ";
        }
        cout << endl;
    }
}

int main() {
    print(3);
    return 0;
}