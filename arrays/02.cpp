#include <algorithm>
#include <iostream>
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

int main() {
  vector<int> arr = {1, 2, 3, 4, 5};
  rotate_by_n(arr, 3);

  int array[] = {1, 2, 3, 4, 5, 6, 7};

  int size = sizeof(array) / sizeof(int);

  rotate_by_n_better(array, 3, size);

  for (int element : array) {
    cout << element << " ";
  }
  cout << endl;
  return 0;
}
