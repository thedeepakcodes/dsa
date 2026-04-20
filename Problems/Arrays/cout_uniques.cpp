#include <iostream>
using namespace std;

void printUniques(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    bool isUnique = true;

    for (int j = 0; j < size; j++) {
      if (i != j && arr[i] == arr[j]) {
        isUnique = false;
        break;
      }
    }

    if (isUnique) {
      cout << arr[i] << ", ";
    }
  }
}

int main() {
  int arr[] = {1, 2, 2, 3, 4, 5, 6, 7, 7, 8, 9, 10, 10, 11, -1, 1, -1};
  int size = sizeof(arr) / sizeof(arr[0]);

  printUniques(arr, size);
}