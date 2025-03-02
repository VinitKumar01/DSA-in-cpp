// Multiple recursion calls

//1. Find the Nth element of Fibonacci series of length N -> In fibonacci series the first element is 0 and the second element is 1 and all the next elements are the sum of last two elements Eg -> 0, 1, 1, 2, 3, 5, 8 ... 

#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1) return n;

    // Multiple recursion calls -> First recursion will happen for the varible last until the base case
    // Then recursion will happen for the secondLast variable until the base case
    int last = fibonacci(n-1);
    int secondLast = fibonacci(n-2);

    return last + secondLast;
}

int main() {
    cout << fibonacci(5) << endl;
    return 0;
}