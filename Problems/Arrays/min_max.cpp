#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

int minimum(int nums[], int size) {
  int minVal = INT_MAX;

  for (int i = 0; i < size; i++) {
    minVal = min(minVal, nums[i]);
  }

  return minVal;
}

int maximum(int nums[], int size) {
  int maxVal = INT_MIN;

  for (int i = 0; i < size; i++) {
    maxVal = max(maxVal, nums[i]);
  }

  return maxVal;
}

int main() {
  int nums[] = {1, 45, 576, 76, 787, 85, 53, -34, -334, 0};
  int size = sizeof(nums) / sizeof(nums[0]);

  cout << "Minimum: " << minimum(nums, size) << endl;
  cout << "Maximum: " << maximum(nums, size) << endl;

  return 0;
}