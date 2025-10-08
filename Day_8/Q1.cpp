#include <iostream>

void hollowRectangle(int rows, int cols) {
    std::cout << "--- Hollow Rectangle ---" << std::endl;
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= cols; ++j) {
            // Print star on first/last row or first/last column
            if (i == 1 || i == rows || j == 1 || j == cols) {
                std::cout << "* ";
            } else {
                std::cout << "  "; // Two spaces to align with "* "
            }
        }
        std::cout << std::endl;
    }
}

int main() {
    hollowRectangle(5, 5);
    return 0;
}
