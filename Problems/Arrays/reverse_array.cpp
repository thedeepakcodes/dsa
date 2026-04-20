#include <iostream>
using namespace std;

void reverseArr(int arr[], int size) {
  int start = 0, end = size - 1;
  while (end > start) {
    int tmp = arr[start];
    arr[start] = arr[end];
    arr[end] = tmp;

    start++;
    end--;
  }
}

int main() {
  int arr[] = {10, 23, 45, 75, 43, 67};
  int size = sizeof(arr) / sizeof(arr[0]);

  reverseArr(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << ",";
  }
}