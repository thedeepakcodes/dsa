#include <iostream>
#include <vector>
using namespace std;

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

vector<int> getPrimes(int limit) {
  vector<bool> isPrime = sievePrimes(limit);
  vector<int> primes;

  for (int i = 0; i < isPrime.size(); i++) {
    if (isPrime[i]) {
      primes.push_back(i);
    }
  }

  return primes;
}

int main() {
  for (int num : getPrimes(50000)) {
    cout << num << ", ";
  }
}