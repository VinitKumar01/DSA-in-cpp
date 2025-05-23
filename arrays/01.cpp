#include <iostream>
#include <vector>

using namespace std;

int second_largest(vector<int> &arr, int size) {
  int largest = arr[0];
  int second = -1;
  for (int i = 0; i < size; i++) {
    if (arr[i] > largest) {
      second = largest;
      largest = arr[i];
    } else if (arr[i] < largest && arr[i] > second) {
      second = arr[i];
    }
  }

  return second;
}
// Similarly second smallest can be done

// removeDuplicate works for sorted arrays
//  if element is not equal to the element taken then it will take place next to
//  it, this way the start of the array will have not equal elements and we can
//  return the size till elements are not equal
int removeDuplicate(vector<int> &arr, int size) {
  int i = 0;
  for (int j = 0; j < size; j++) {
    if (arr[j] != arr[i]) {
      arr[i + 1] = arr[j];
      i++;
    }
  }
  return i +
         1; // size till which all the elements are replaces uniquely, for {1,
            // 2, 2, 5, 5, 7, 7} the size will be 4 as there will be four
            // unequal elements in start of array {1, 2, 5, 7||, 5, 7, 7}
}

int main() {
  vector<int> arr = {1, 2, 7, 7, 5};
  cout << second_largest(arr, 5) << endl;
}
