//Parameterised and Functional recursion


//1. Sum of n numbers - Parameterised way - task done using parameters

//2. Sum of n numbers - Functional way - task done by returning from the funtion

//3. Factorial of n - Parameterised way

//4. Factorial of n - Functional way

#include <iostream>

using namespace std;

void print1(int i, int sum = 0) {
    if (i<1) {
        cout << sum << endl;
        return;
    }
    print1(i - 1, sum + i);
}

int sum(int n) {
    if (n == 0) {
        return 0;
    }

    return n + sum(n-1);
}

void print2(int i, int result = 1) {
    if (i<1) {
        cout << result << endl;
        return;
    }
    print2(i - 1, result * i);
}

int factorial(int number) {
    if (number == 1) {
        return 1;
    }
    return number * factorial(number - 1);
}

int main() {
    //print1(5); // Second argument is not necessory
    //cout << sum(5) << endl;
    //print2(5);
    cout << factorial(5) << endl;
    return 0;
}