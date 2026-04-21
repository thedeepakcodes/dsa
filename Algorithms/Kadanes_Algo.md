# Kadane's Algorithm

Kadane's Algorithm is used to find the maximum sum of a contiguous subarray within a one-dimensional array of numbers.

### Intuition

If the running sum becomes negative, it will only reduce the sum of future subarrays.

So, we reset it to 0 and start fresh.

### Algorithm

- Initialize:
  - `max_sum = -∞`
  - `current_sum = 0`
- Traverse the array:
  - Add current element to `current_sum`
  - Update `max_sum = max(max_sum, current_sum)`
  - If `current_sum < 0`, set `current_sum = 0`
- Return `max_sum`

### Code

```cpp
int kadane(vector<int>& nums) {
  int max_sum = INT_MIN;
  int current_sum = 0;

  for (int x : arr) {
    current_sum += x;
    max_sum = max(max_sum, current_sum);

    if (current_sum < 0) {
      current_sum = 0;
    }
  }

  return max_sum;
}
```

### Complexity

- Time Complexity: $O(n)$
- Space Complexity: $O(1)$
