//1. Print Name 5 times
//2. Print linearly form 1 to N
//3. Print from N to 1
//4. Print Linearly from 1 to N (But By Backtrack) -> Normally task is done till the condiotion is met but in backtracking the function call's itself until the condition is met but the task is done after all the functions gets called -> means while returning backwards
//5. Print from N to 1 (By Backtrack)

#include <iostream>

using namespace std;

int nameCount = 1;
void print1() {
    cout << "Vinit Kumar" << endl;
    if (nameCount == 5) return;
    nameCount++;
    print1();
}

void print2(int start, int end) {
    cout << start << endl;
    if (start==end) return;
    start++;
    print2(start, end);
}

void print3(int start, int end) {
    cout << start << endl;
    if (start==end) return;
    start = start-1;
    print3(start, end);
}

void print4(int i, int n) {
    if (i<1) return;
    print4(i-1, n);
    cout << i << endl;//this gets printed at the end
}

void print5(int i, int n) {
    if (i > n) return;
    print5(i+1, n);
    cout << i << endl;//this gets printed at the end
}


int main() {
    //print1();
    //print2(1, 10);
    //print3(10, 1);
    //print4(10,10);
    //print5(1,10);
    return 0;
}