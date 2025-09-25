#include <iostream>

/*type casting*/

int main() {
  // char -> int
  // float -> int
  // int -> char

  // @Me: > {2021-07-07T14:00:00}
  // type-casting: Changing the data type of a variable to another data type.
  // In C++, there are two types of type-casting:
  // 1. Implicit type-casting: Done by the compiler automatically.
  int num1 = 10;
  float num2 = 5.5;
  
  float result = num1 + num2;
  std::cout << result << "\n";
  
  int result2 = num1 + num2;
  std::cout << result2 << "\n";

  // 2. Explicit type-casting: Done by the programmer.
  int v = (int)'a';
  char c = (char)v;
  std::cout << c << "\n";
}
