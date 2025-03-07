// Hashing

//1. Find how many times a number is present in an array
//2. Find how many times a character is present in an array of
//3. Task 1 but should work for bigger numbers like 10^10 etc.


#include <iostream>
# include <bits/stdc++.h>

using namespace std;

void print1(int arr[], int hash[], int number) {
    cout << hash[number] << endl;
}

void print2(char arr[], int hash[], char character) {
    cout << hash[character - 'a'] << endl;
}

void print3(long arr[], map<long, long> mpp, long number) {
    cout << mpp[number] << endl;
}

int main() {

    int arr[5] = {1, 3, 2, 1, 3};

    //pre computation
    int hash[13] = {0}; // 13 means we are assuming that the max element is 12 but what if we have the max element value to be 10^9 as we know when we define an array in any function (like main) it's max value is 10^6 and 10^7 when declaring globally
    for (int element: arr) {
        hash[element] += 1;
    }

    print1(arr, hash, 3);

    char arr1[5] = {'a', 'f', 'q', 'f', 'j'};
    int hash1[26] = {0};// we can take 256 instead of 26 if we have to do it for all the 256 characters and then we won't have to do character - a because we can simply allocate them there ascii codes 0 to 256 by just putting the in the square braces
    for (char character: arr1) {
        hash1[character - 'a'] += 1;// allocating 0 to a and so on Eg: let character be c then c - a will be 99 - 97 in ascii then hash[2] index will be given to c count
    }

    char character = 'f';
    print2(arr1, hash1, character);



    //this is method applicable for both int and character
    long arr2[5] = {1, 10, 1000000000, 2131245346, 1000000000};
    map<long, long> mpp; // map -> key, pair and key are sorted, lower to greater // Should use unordered_map instead of map as a map have insertion time complexity of O(n) for all cases (best to wrost) but for unordered_map time complexity moves from best and average case of O(1) to wrost case of O(n)
    for (long element: arr2) {
        mpp[element]++;// firstly as mpp is empty so lets say if we check for 1 in this mpp[1] will return 0 as there is no value assigned to key 1, and then mpp[1]++; will make the value for key 1 to 0 + 1, this will happen for all the elements in the array then all the elements will have a key in mpp with there count as value
    }

    print3(arr2, mpp, 1000000000);
    return 0;
}