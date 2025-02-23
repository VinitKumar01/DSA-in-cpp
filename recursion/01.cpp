#include <iostream>

using namespace std;

int count = 0;

void print() {
    cout << count << endl;
    if (count == 3) return;
    count++;
    print();
}

int main() {
    print();
    return 0;
}