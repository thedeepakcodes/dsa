#include <cmath>
#include <iostream>
using namespace std;

int reverseInt(int num) {
  int reversed = 0;

  while (num > 0) {
    reversed = reversed * 10 + (num % 10);
    num /= 10;
  }

  return reversed;
}

int main() { cout << reverseInt(1234); }