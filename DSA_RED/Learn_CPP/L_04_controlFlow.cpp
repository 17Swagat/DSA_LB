#include <iostream>

int main(){
    int age;
    std::cout << "Enter age: ";
    std::cin >> age;
    if (age > 18) {
        std::cout << "You can drive";
    } else if (age == 18) {
        std::cout << "Driving Test";
    } else {
        std::cout << "You got driver's license";
    }
}