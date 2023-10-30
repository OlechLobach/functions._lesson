#include <iostream>
#include "func.h"

int main() {
    int choice;
    int height, width, number;

    std::cout << "Choose an option:" << std::endl;
    std::cout << "1. Draw a rectangle" << std::endl;
    std::cout << "2. Calculate factorial" << std::endl;
    std::cin >> choice;
     /* heigth and width rectangle*/
    switch (choice) {
        
    case 1:
        std::cout << "Enter the height of the rectangle: ";
        std::cin >> height;
        std::cout << "Enter the width of the rectangle: ";
        std::cin >> width;
        drawRectangle(height, width);
        break;
    }
       /* Factorial the number*/
    switch (choice){
    case 2:
        std::cout << "Enter a number: ";
        std::cin >> number;

        if (number < 0) {
            std::cout << "Factorial is defined only for non-negative integers." << std::endl;
        }
        else {
            unsigned long long result = calculateFactorial(number);
            std::cout << "Factorial of " << number << " is " << result << std::endl;
        }
        break;

    default:
        std::cout << "Invalid choice." << std::endl;
        break;
    }

    return 0;
}
