## Linear Search

- A simple searching algorithm.
- Checks each element of the array sequentially until the target is found or the array ends.

### Algorithm

- Start from index 0
- Compare each element with the target
- If match -> return index
- If end reached -> return -1

### Code

#### Using Arrays

```cpp
int linearSearch(int arr[], int size, int target) {
  for (int i = 0; i < size; i++) {
    if (target == arr[i]) {
      return i;
    }
  }

  return -1;
}
```

#### Using Vectors

```cpp
int linearSearch(const vector<int>& v, int target) {
  int i = 0;
  for (int val : v) {
    if (target == val) {
      return i;
    }

    i++;
  }

  return -1;
}
```

### Disadvantages

- Slow for large datasets
- Not efficient compared to Binary Search

### Complexity

- Time Complexity: $O(n)$
- Space Complexity: $O(1)$
