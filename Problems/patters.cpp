#include <iostream>
using namespace std;

/*
 * Problems picked from GeeksforGeeks
 * https://media.geeksforgeeks.org/wp-content/uploads/20230201105319/Pattern-Printing-in-Java.jpg
 *
 */
namespace Patterns {

void SquareHollow(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      if (i == 0 || j == 0 || i == size - 1 || j == size - 1) {
        cout << "* ";
      } else {
        cout << "  ";
      }
    }

    cout << endl;
  }
}

void NumberTriangle(int size) {
  for (int i = 1; i <= size; i++) {
    for (int j = 0; j < size - i; j++) {
      cout << " ";
    }

    for (int j = 1; j <= i; j++) {
      cout << i << " ";
    }

    cout << endl;
  }
}

void NumberIncreasingPyramid(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j <= i; j++) {
      cout << j + 1;
    }

    cout << endl;
  }
}

void NumberIncreasingReversePyramid(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - i; j++) {
      cout << j + 1;
    }

    cout << endl;
  }
}

void NumberChangingPyramid(int size) {
  int count = 1;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j <= i; j++) {
      cout << count++;
    }

    cout << endl;
  }
}

void ZeroOneTriangle(int size) {
  for (int i = 0; i < size; i++) {
    int bit = i % 2 == 0;

    for (int j = 0; j <= i; j++) {
      cout << bit;
      bit = !bit;
    }

    cout << endl;
  }
}

void PalindromeTriangle(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size - 1 - i; j++) {
      cout << " ";
    }

    for (int j = i; j >= 0; j--) {
      cout << j + 1;
    }

    for (int j = 0; j < i; j++) {
      cout << j + 2;
    }

    cout << endl;
  }
}

void RhombusPattern(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < i; j++) {
      cout << " ";
    }

    for (int j = 0; j < size; j++) {
      cout << "* ";
    }

    cout << endl;
  }
}

void DiamondPattern(int size) {
  for (int i = 1; i <= size; i++) {
    for (int j = 0; j < size - i; j++) {
      cout << " ";
    }

    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }

    cout << endl;
  }

  for (int i = size - 1; i >= 1; i--) {
    for (int j = 0; j < size - i; j++) {
      cout << " ";
    }

    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }

    cout << endl;
  }
}

void Square(int size) {
  int i = 0;

  for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
      cout << "*";
    }

    cout << endl;
  }
}

void RightTriangle(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j <= i; j++) {
      cout << "*";
    }

    cout << endl;
  }
}

void AlphabeticalRightTriangle(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j <= i; j++) {
      cout << (char)(65 + i);
    }

    cout << endl;
  }
}

void FloydsAlphabeticalTriangle(int size) {
  char start = 'A';

  for (int i = 0; i < size; i++) {
    for (int j = 0; j <= i; j++) {
      cout << start++;
    }

    cout << endl;
  }
}

void CenteredPyramid(int size) {
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < (size - i - 1); j++) {
      cout << " ";
    }

    for (int j = 0; j <= i; j++) {
      cout << "*";

      if (j != i) {
        cout << "*";
      }
    }

    cout << endl;
  }
}

}  // namespace Patterns

int main() {
  Patterns::SquareHollow(5);
  cout << endl;

  Patterns::NumberTriangle(4);
  cout << endl;

  Patterns::NumberIncreasingPyramid(4);
  cout << endl;

  Patterns::NumberIncreasingReversePyramid(4);
  cout << endl;

  Patterns::NumberChangingPyramid(4);
  cout << endl;

  Patterns::ZeroOneTriangle(5);
  cout << endl;

  Patterns::PalindromeTriangle(8);
  cout << endl;

  Patterns::RhombusPattern(4);
  cout << endl;

  Patterns::DiamondPattern(4);
  cout << endl;

  Patterns::FloydsAlphabeticalTriangle(4);
  cout << endl;

  Patterns::Square(4);
  cout << endl;

  Patterns::RightTriangle(4);
  cout << endl;

  Patterns::AlphabeticalRightTriangle(5);
  cout << endl;

  Patterns::CenteredPyramid(4);
  cout << endl;
}