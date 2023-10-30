#include<iostream>
#include"func.h"

int main() {
    int height, width;
    std::cout << "Enter the height of the rectangle: ";
    std::cin >> height;
    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    drawRectangle(height, width);

	return 0;
}
