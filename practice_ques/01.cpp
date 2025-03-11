// 1. Print
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

// 2. Given an array of integers, find the first element that appears more than once using hashing.

// 3. Implement a recursive function to compute the Nth Fibonacci number. Optimize it to avoid redundant calculations

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solution1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

int solution3(int n)
{
    if (n <= 1)
        return n;

    return solution3(n - 1) + solution3(n - 2);
}

int main()
{
    // solution1(5);

    int arr[6] = {10, 2, 10, 2, 5, 6};
    // preprocessing
    map<int, int> mpp;
    // for (int element : arr)
    // {
    //     mpp[element]++;
    //     if (mpp[element] == 2)
    //     {
    //         cout << element << endl;
    //         break;
    //     }
    // }

    cout << solution3(6) << endl;
    return 0;
}