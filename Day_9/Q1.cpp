#include <iostream>

// Also known as Floyd's Triangle
void numberTriangle(int n) {
    std::cout << "--- Number Triangle ---" << std::endl;
    int number = 1;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            std::cout << number << " ";
            number++;
        }
        std::cout << std::endl;
    }
}

int main() {
    numberTriangle(5);
    return 0;
}
