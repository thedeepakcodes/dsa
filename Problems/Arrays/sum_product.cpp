#include <iostream>
#include <utility>
using namespace std;

pair<int, int> sumAndProduct(int arr[], int size) {
  int sum = 0, product = 1;

  for (int i = 0; i < size; i++) {
    sum += arr[i];
    product *= arr[i];
  }

  return {sum, product};
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int size = sizeof(arr) / sizeof(arr[0]);

  auto result = sumAndProduct(arr, size);

  cout << "Sum: " << result.first << endl;
  cout << "Product: " << result.second << endl;
}