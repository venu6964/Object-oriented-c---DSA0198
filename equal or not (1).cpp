#include <iostream>

int main() {
    int num1, num2;

    std::cout << "Enter the first integer: ";
    std::cin >> num1;

    std::cout << "Enter the second integer: ";
    std::cin >> num2;

    if (num1 == num2) {
        std::cout << "The numbers are equal." << std::endl;
    } else {
        std::cout << "The numbers are not equal." << std::endl;
    }

    return 0;
}
