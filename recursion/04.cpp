//1. Reversing an array
//2. Check if a string is a palindrome

#include <iostream>

using namespace std;

void reverse(int l, int r, int arr[]) {
    if (l>=r) return;

    swap(arr[l], arr[r-1]);
    reverse(l+1, r-1, arr);
}

bool stringPalindromeCheck(string &s, int i=0) {
    if (i>= s.size()/2) return true;
    if (s[i] != s[s.size() - 1 - i]) return false;

    return stringPalindromeCheck(s, i+1);
}

int main() {
    int n = 5;
    int arr[n];
    for (int i = 0; i<n; i++) arr[i] = i;
    reverse(0, n, arr);
    //for (auto element: arr) cout << element << endl;
    
    string str = "MADAM";
    cout << stringPalindromeCheck(str) << endl;
    return 0;
}