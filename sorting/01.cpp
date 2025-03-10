// Selection sort -> Find the minimum element in array then place it in front sequencely
// Eg. [10, 2, 23, 1, 9, 7]
// Step 1: Find the minimum element and swap its position with 0th index. [1, 2, 23, 10, 9, 7]
// Step 2: Find the next minimum element and swap its position with 1st index. [1, 2, 23, 10, 9, 7] no effect here
// Step 3: Find the next minimum element and swap its position with 2nd index. [1, 2, 7, 10, 9, 23]
// Step 4: Find the next minimum element and swap its position with 3rd index. [1, 2, 7, 9, 10, 23]
// Step 5: Find the next minimum element and swap its position with 4th index. [1, 2, 7, 9, 10, 23] no effect here
// No need to run it for last element as if the previous elements are sorted it will be sortes automatically.
// Observations -> Elements 6, Steps 5
// Time complexity -> O(N^2)

// -------------------------------------------------------------------------------------------------------

// Bubble sort -> Pushes the max to last by ADJCENT SWAPS
// Eg. [10, 2, 23, 1, 9, 7]
// Step 1: Check first and second element is sorted or not, if not then swap them to push the larger element towards last, then 2nd and 3rd and so on. Do it till the last element and you will find out the in the first iteration we have pushed the max element of array to the last. [2, 10, 23, 1, 9, 7] -> [2, 10, 23, 1, 9, 7] -> [2, 10, 1, 23, 9, 7] -> [2, 10, 1, 9, 23, 7] -> [2, 10, 1, 9, 7, 23]
// Step 2: As we have already pushed the max element to the last now we can skip one check for last element. Do the same steps until the second element is sorted (as them first will be sorted by default)
// Final result: [1, 2, 7, 9, 10, 23]
// Time complexity: Best-> O(N) Wrost-> O(N^2)

// -------------------------------------------------------------------------------------------------------

// Insertion sort -> Take an element and place it at its correct position
// Eg. [10, 2, 23, 1, 9, 7]
// Step 1: Pick the element and check if it is bigger than the left one if not shift it to left until the element on the left is smaller or the index is 0th.
// Step 2: Pick 2 and check if the element on the left is smaller or not if not shift it to left by swaping. [2, 10, 23, 1, 7, 9]
// Step 3: Pick 23 -> already bigger than the left element
// Step 4: Pick 1 -> Swap to the element in left until it reaches it's correct position (element on left is smaller or the position is 0th index). Do it for the other elements until they reaches their correct position.
// Final result: [1, 2, 7, 9, 20, 23]

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
}

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++) // will run n-1 times as if till the second element is sorted then no need to run it for first element as it will be sorted by default
    {
        int swapCount = 0;
        for (int j = 0; j < n - 1 - i; j++) // at first will run n-1 times as we don't have arr[n+1] element to check for sort, also as it will not check for sorted elements.
        {

            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapCount++;
            }
        }
        if (swapCount == 0) // if no swap is done means all the elements are already sorted so no need to run the function further
        {
            return;
        }
    }
}

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j])
        {
            swap(arr[j], arr[j - 1]);
            j--;
        }
    }
}

int main()
{
    int arr[] = {10, 2, 23, 1, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]); // Assuming int is 4 bytes (on most systems), sizeof(arr) = 6 × 4 = 24 bytes. arr[0] is an int, so sizeof(arr[0]) = 4 bytes. => 24/4 = 6(length of array)
    // selectionSort(arr, n);
    // bubbleSort(arr, n);
    insertionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
