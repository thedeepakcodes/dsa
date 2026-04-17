# Sieve of Eratosthenes

The Sieve of Eratosthenes is an efficient algorithm used to find all prime numbers up to a given number ${n}$.

## Idea

- Start with a list of numbers from 2 to n
- Assume all numbers are prime initially
- Pick the first unmarked number (starting from 2)
- Mark all its multiples as not prime
- Repeat for the next unmarked number
- Remaining unmarked numbers are prime

![Sieve of Eratosthenes Illustration](https://upload.wikimedia.org/wikipedia/commons/9/94/Animation_Sieve_of_Eratosth.gif "Sieve of Eratosthenes")

### Optimizations

From the illustration, we can derive two important optimizations:

### 1. Iterate only up to $\sqrt{n}$

We only need to check numbers from 2 up to $\sqrt{n}$, because any composite number greater than $\sqrt{n}$ must have at least one factor smaller than or equal to $\sqrt{n}$.

#### Example

Let $n = 36$, so $\sqrt{n} = 6$.

- Consider the number $30$:
  - $30 = 5 \times 6 $
  - It already has a factor $5$ less than or equal to $6$.
- Consider the number 35:
  - $35 = 5 \times 7$
  - Again, $5$ is less than or equal to $6$.

So, all composite numbers greater than $6$ are already marked when processing smaller numbers $≤ 6$. There is no need to go beyond $\sqrt{n}$.

---

### 2. Start marking multiples from $i^2$

When processing a prime number $i$, we start marking its multiples from $i^2$, not from $2 \times i$.

This is because all smaller multiples of $i$ have already been marked by smaller prime numbers.

#### Example

Let $i = 5:$

- Multiples of 5 are:

  $5 \times 2 = 10$

  $5 \times 3 = 15$

  $5 \times 4 = 20$

  $5 \times 5 = 25$

Now observe:

- $10$ is already marked when processing $2$
- $15$ is already marked when processing $3$
- $20$ is already marked when processing $2$

So, the first _new_ multiple that hasn't been marked yet is:

- $5 \times 5 = 25$

Hence, we start from $i^2$.

---

### Code

```cpp
vector<bool> sievePrimes(int limit) {
  vector<bool> isPrime(limit + 1, true);

  isPrime[0] = false;
  isPrime[1] = false;

  for (int i = 2; i <= limit / i; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= limit; j += i) {
        isPrime[j] = false;
      }
    }
  }

  return isPrime;
}
```
