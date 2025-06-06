#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
  vector<int> temp;
  // 1. [low..mid]
  // 2. [mid+1..high]
  int left = low;
  int right = mid + 1;
  while (left <= mid && right <= high) {
    if (arr[left] <= arr[right]) {
      temp.push_back(arr[left]);
      left++;
    } else {
      temp.push_back(arr[right]);
      right++;
    }
  }

  while (left <= mid) {
    temp.push_back(arr[left]);
    left++;
  }

  while (right <= high) {
    temp.push_back(arr[right]);
    right++;
  }

  for (int i = low; i <= high; i++) {
    arr[i] = temp[i - low];
  }
}

void divide(vector<int> &arr, int low, int high) {
  if (low == high)
    return;

  int mid = low + (high - low) / 2;
  divide(arr, low, mid);
  divide(arr, mid + 1, high);
  merge(arr, low, mid, high);
}

void mergesort(vector<int> &arr, int n) { divide(arr, 0, n - 1); }

int main() {
  vector<int> arr = {3, 1, 2, 4, 1, 5, 2, 6, 4};
  int size = arr.size();
  mergesort(arr, size);

  for (int num : arr) {
    cout << num << " ";
  }
  cout << endl;

  return 0;
}
