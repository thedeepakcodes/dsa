# Prime Numbers

A prime number is a natural number that has exactly two distinct divisors: 1 and itself.

Examples: 2, 3, 5, 7, 11, ...

- 1 is not prime (only one factor)
- 2 is the smallest and only even prime

---

### Key Idea

If a number `n` is not prime, it must have a factor ≤ $\sqrt{n}$.

So we only need to check divisors up to $\sqrt{n}$.

---

## $\sqrt{n}$ &nbsp; Method

### Idea

- Skip even numbers
- Check only odd divisors up to $\sqrt{n}$

### Code

```cpp
bool isPrime(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;

  if (n % 2 == 0) return false;

  for (int i = 3; i <= n / i; i += 2) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}
```

---

## 6k ± 1 Method

### Idea

Any integer can be written as:

```
n = 6k + r, where r ∈ {0,1,2,3,4,5}
```

- Multiples of 2: 6k+2, 6k+4
- Multiples of 3: 6k+3

Remaining candidates:

```
6k - 1 and 6k + 1
```

Only these need to be checked.

---

### Code

```cpp
bool isPrime(int n) {
  if (n <= 1) return false;
  if (n <= 3) return true;

  if (n % 2 == 0 || n % 3 == 0) return false;

  for (int i = 5; i <= n / i; i += 6) {
    if (n % i == 0 || n % (i + 2) == 0) {
      return false;
    }
  }

  return true;
}
```
