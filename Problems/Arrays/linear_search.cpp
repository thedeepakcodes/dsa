#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (target == arr[i]) {
      return i;
    }
  }

  return -1;
}

int main() {
  int arr[] = {23, 56, 67, 89, 34, 57, 78, 42};
  int size = sizeof(arr) / sizeof(arr[0]);

  int target = 89;

  cout << linearSearch(arr, size, target) << endl;
}