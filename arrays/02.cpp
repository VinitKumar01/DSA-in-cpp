#include <algorithm>
#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

void rotate_left(vector<int> &arr) {
  int temp = arr[0];

  for (int i = 1; i < arr.size(); i++) {
    arr[i - 1] = arr[i];
  }
  arr[arr.size() - 1] = temp;
}

void rotate_by_n(vector<int> &arr, int n) {
  vector<int> temp;

  for (int i = 0; i < n; i++) {
    temp.push_back(arr[i]);
  }

  for (int i = n; i < arr.size(); i++) {
    arr[i - n] = arr[i];
  }

  for (int i = arr.size() - n; i < arr.size(); i++) {
    arr[i] = temp[i - (arr.size() - n)];
  }
}

// without temperory array

void rotate_by_n_better(int arr[], int n, int size) {
  reverse(arr, arr + n);
  reverse(arr + n, arr + size);
  reverse(arr, arr + size);
}

void move_zero_to_end(int arr[], int size) {
  int j = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] == 0) {
      j = i;
      break;
    }
  }

  if (j == -1)
    return;

  for (int i = j + 1; i < size; i++) {
    if (arr[i] != 0) {
      swap(arr[i], arr[j]);
      j++;
    }
  }
}

int linear_search(int arr[], int number, int size) {
  for (int i = 0; i < size; i++) {
    if (arr[i] == number) {
      return i;
    }
  }

  return -1;
}

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  rotate_by_n(arr, 3);

  int array[] = {1, 2, 3, 4, 5, 6, 7};
  int arr_with_zero[] = {0, 1, 0, 0, 5, 1, 0, 0};
  int size = sizeof(array) / sizeof(int);

  rotate_by_n_better(array, 3, size);
  move_zero_to_end(arr_with_zero, sizeof(arr_with_zero) / sizeof(int));
  cout << linear_search(arr_with_zero, 5, sizeof(arr_with_zero) / sizeof(int))
       << endl;
  for (int element : array) {
    cout << element << " ";
  }
  cout << endl;
  for (int element : arr_with_zero) {
    cout << element << " ";
  }
  cout << endl;
  return 0;
}
