#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

void swapMinMax(int arr[], int size) {
  int minIdx = 0, maxIdx = 0;

  int minVal = INT_MAX;
  int maxVal = INT_MIN;

  for (int i = 0; i < size; i++) {
    if (minVal > arr[i]) {
      minIdx = i;
      minVal = arr[i];
    }

    if (maxVal < arr[i]) {
      maxIdx = i;
      maxVal = arr[i];
    }
  }

  arr[maxIdx] = minVal;
  arr[minIdx] = maxVal;
}

int main() {
  int arr[] = {2, 3, 4, 5, 6, 8, 0, -1, -7};
  int size = sizeof(arr) / sizeof(arr[0]);

  swapMinMax(arr, size);

  for (int i = 0; i < size; i++) {
    cout << arr[i] << ",";
  }
}
