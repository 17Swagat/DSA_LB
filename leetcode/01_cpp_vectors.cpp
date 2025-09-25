/*#include <algorithm>*/
/*#include <iostream>*/
/*#include <vector>*/
/**/
/*int main() {*/
/*  std::vector<int> nums = {*/
/*      1,*/
/*      2,*/
/*  };*/
/**/
/*  std::cout << nums.size() << "\n";*/
/**/
/*  // how to sort the vector nums?*/
/*  std::sort(nums.begin(), nums.end());*/
/*  std::cout << nums.data() << "\n";*/
/*  return 0;*/
/*}*/

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
  // Create a vector
  std::vector<int> numbers = {64, 34, 25, 12, 22, 11, 90};
  std::vector<std::string> jumps = {"jump 01", "jumps 02"};
  /*std::cout << jumps[0] << "\n";*/
  for (std::string jump : jumps) {
    std::cout << jump << "\n";
  }
  return 0;

  //
  // Print the original vector
  std::cout << "Original vector: ";
  for (int num : numbers) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  // Sort the vector using the default method (std::sort)
  std::sort(numbers.begin(), numbers.end());

  // Print the sorted vector
  std::cout << "Sorted vector (default method): ";
  for (int num : numbers) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  // Create a new vector for demonstration
  std::vector<int> numbers2 = {64, 34, 25, 12, 22, 11, 90};

  // Sort the vector using the std::sort algorithm with a custom comparator
  std::sort(numbers2.begin(), numbers2.end(), [](int a, int b) {
    return a > b; // Sort in descending order
  });

  // Print the sorted vector
  std::cout << "Sorted vector (custom comparator): ";
  for (int num : numbers2) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  // Create a new vector for demonstration
  std::vector<int> numbers3 = {64, 34, 25, 12, 22, 11, 90};

  // Sort the vector using the std::stable_sort algorithm
  std::stable_sort(numbers3.begin(), numbers3.end());

  // Print the sorted vector
  std::cout << "Sorted vector (stable sort): ";
  for (int num : numbers3) {
    std::cout << num << " ";
  }
  std::cout << std::endl;

  return 0;
}
