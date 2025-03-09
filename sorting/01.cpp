// selection sort -> find the minimum element in array then place it in front sequencely
// Eg. [10, 2, 23, 1, 9, 7]
// Step 1: find the minimum element and swap its position with 0th index. [1, 2, 23, 10, 9, 7]
// Step 2: find the next minimum element and swap its position with 1st index. [1, 2, 23, 10, 9, 7] no effect here
// Step 3: find the next minimum element and swap its position with 2nd index. [1, 2, 7, 10, 9, 23]
// Step 4: find the next minimum element and swap its position with 3rd index. [1, 2, 7, 9, 10, 23]
// Step 5: find the next minimum element and swap its position with 4th index. [1, 2, 7, 9, 10, 23] no effect here
// No need to run it for last element as if the previous elements are sorted it will be sortes automatically.
// Observations -> Elements 6, Steps 5

#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        swap(arr[i], arr[min]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {10, 2, 23, 1, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // Assuming int is 4 bytes (on most systems), sizeof(arr) = 6 × 4 = 24 bytes. arr[0] is an int, so sizeof(arr[0]) = 4 bytes. => 24/4 = 6(length of array)
    selectionSort(arr, n);
    return 0;
}
