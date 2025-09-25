
// What is a preprocessor-directive?

#include <iostream>

/*g++ filename.cpp -o output.exe*/

/*using namespace std;*/
// or we can:
/*using std::cout;*/
/*using std::cin;*/

int main() {

  /*Hello World*/
  int a = 10;
  std::cout << a << "\n";

  /*#01*/
  /*  std::cout << "Enter number: ";*/
  /*  int a;*/
  /*  std::cin >> a;*/
  /*  std::cout << "Output is: " << a << "\n"; // or: `std::endl;`*/

  /*#02*/
  /*Difference between using "\n" Vs "std::endl"*/
  // "\n" is FASTER THAN std::endl... std::endl is slower because it flushes the
  // buffer.

  return 0;
}
