#include <iostream>
using namespace std;

bool isPowerOfTwo(int x) {
  if (x <= 0) return false;
  int term = 1;

  while (x > term) {
    term *= 2;
  }

  return x == term;
}

int isPowerOfTwoBitwise(int x) {
  if (x <= 0) return false;

  return (x & (x - 1)) == 0;
}

int main() {
  cout << isPowerOfTwo(8);

  cout << endl;

  cout << isPowerOfTwoBitwise(8);
}