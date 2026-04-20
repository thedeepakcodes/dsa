#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  int arr1[] = {4, 8, 12, 16, 20, 24, 28, 32, 36, 40, 2, 4, 6, 8, 10};
  int arr1Size = sizeof(arr1) / sizeof(arr1[0]);

  int arr2[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
  int arr2Size = sizeof(arr2) / sizeof(arr2[0]);

  sort(arr1, arr1 + arr1Size);
  sort(arr2, arr2 + arr2Size);

  int i = 0, j = 0;

  cout << "Intersection: ";

  while (i < arr1Size && j < arr2Size) {
    if (arr1[i] < arr2[j]) {
      i++;
    } else if (arr1[i] > arr2[j]) {
      j++;
    } else {
      if (i == 0 || arr1[i] != arr1[i - 1]) {
        cout << arr1[i] << " ";
      }

      i++;
      j++;
    }
  }
}