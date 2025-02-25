//1. Count the number of digits in the given number

//2. Reverse the given number

//3. Palindrome check eg- 121 is a palindrome

//4. Angstrong Numbers - numbers in which sum of digits^(no of digits in the given number) of each digit is equals to the number itself Eg- 371 = 3^3 + 7^3 + 1^3   Eg 2- 1634 = 1^4 + 6^4 + 3^4 + 4^4

//5. Print all divisors of the number given

//6. Prime number check

//7. GCD(Greatest Common Divisor) or HCF(Highest Common Factor)

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void countDigits1(int number) {
    int count = 0;
    while(number > 0) {
        number = number/10;
        count++;
    }
    cout << count << endl;
}

//Another way using log -> take log of the number add 1 to it and then take integer part of the result
void countDigits2(int number) {
    //code doesn't work if the number is 0 as log10(0) is not defined
    int count = (int)(log10(number) + 1);
    cout << count << endl; 
}

void reverseNumber(int number) {
    int lastdigit;
    int reverse = 0;
    while(number > 0) {
        lastdigit = number%10;
        reverse = (reverse*10) + lastdigit;
        number = number/10;
    }
    cout << reverse << endl;
}

void palindromeCheck(int number) {
    int duplicateNumber = number;
    int lastdigit;
    int reverse = 0;
    while(duplicateNumber > 0) {
        lastdigit = duplicateNumber%10;
        reverse = (reverse*10) + lastdigit;
        duplicateNumber = duplicateNumber/10;
    }
    if (reverse == number) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
}

void arungstrongCheck(int number) {
    int duplicateNumber = number;
    int lastdigit;
    int sumOfCubes = 0;
    while(number > 0) {
        lastdigit = number%10;
        sumOfCubes += pow(lastdigit, (int)(log10(duplicateNumber) + 1));
        number = number/10;
    }
    if (sumOfCubes == duplicateNumber) cout << "true" << endl;
    else cout << "false" << endl;
}

void printAllDivisors1(int number) {
    for (int i=1; i<=number; i++) {
        if (number%i==0) cout << i << endl;
    }
}

//Better Approach -> explanation on yt
void printAllDivisors2(int number) {
    set<int> st;
    for (int i=1; i<=sqrt(number); i++) {
        if (number%i == 0) {
            st.insert(i);
            st.insert(number/i);
        }
    }

    for (auto element: st) cout << element << endl;
}

// Bettter approach than video
void primeCheck(int n) {
    int count = 0;
    for (int i=1; i<=sqrt(n); i++) {
        if (n%i==0) {
            count++;
        }
    }
    if(count == 1) cout << "true" << endl;
    else cout << "false" << endl;
}

void printGCD_HCF(int n1, int n2) {
    for (int i = min(n1, n2); i>=1; i--) {
        if (n1%i == 0 && n2%i == 0) {
            cout << i << endl;
            break;
        }
    }
}

//GCD or HCF using Eucliden Algorithm -> gcd(n1, n2) = gcd(n1-n2, n2) where n1>n2  -> you can do this until one of the number becomes 0 or less and then the other number remaining will be the GCD but if the numbers are big this might end up taking a lot more time  -> by observarion (in video) we can make it gcd(a, b) = gcd(a%b, b) where a>b
void gcdUsingEuclidenAlgorithm(int n1, int n2) {
    int a=n1,b=n2;
    while (a>0 and b>0) {
        if (a>b) a=a%b;
        else b=b%a;

        if (a==0) cout << b << endl;
        else cout << a << endl;
    }
}

int main() {
    //countDigits1(6543789);
    //countDigits2(6543789);
    //reverseNumber(6543789);
    //palindromeCheck(121);
    //arungstrongCheck(1634);
    //printAllDivisors1(36);
    //printAllDivisors2(36);
    //primeCheck(17);
    //printGCD_HCF(20,40);
    gcdUsingEuclidenAlgorithm(20,40);
    return 0;
}