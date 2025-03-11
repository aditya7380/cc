#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;

    if (num > 0) {
        std::cout << "The number is positive.\n";
    } else if (num < 0) {
        std::cout << "The number is negative.\n";
    } else {
        std::cout << "The number is zero.\n";
    }

    return 0;
}