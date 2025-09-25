#include <algorithm>
#include <iostream>
#include <vector>

int main(int argc, char *argv[]) {
  /*#1*/
  /*std::vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};*/
  /*std::sort(numbers.begin(), numbers.end());*/
  /*for (int nums : numbers) {*/
  /*  std::cout << nums << " ";*/
  /*}*/

  /*#2*/
  std::vector<int> vector_01 = {1, 2, 3};
  std::vector<int> vector_02 = {3, 4};

  std::vector<int> vector_03;
  vector_03.insert(vector_03.end(), vector_01.begin(), vector_01.end());
  vector_03.insert(vector_03.end(), vector_02.begin(), vector_02.end());

  for (int nums : vector_03) {
    std::cout << nums << " ";
  }

  return 0;
}
