#include <iostream>

// --- Pattern 1: Solid Rectangle of Stars ---
// The most basic pattern. Outer loop for rows, inner loop for columns.
void printSolidRectangle(int rows, int cols) {
    std::cout << "--- Solid Rectangle (" << rows << "x" << cols << ") ---" << std::endl;
    // Outer loop for rows
    for (int i = 0; i < rows; ++i) {
        // Inner loop for columns
        for (int j = 0; j < cols; ++j) {
            std::cout << "* ";
        }
        // After each row is printed, move to the next line.
        std::cout << std::endl;
    }
}

// --- Pattern 2: Descending Number Pattern ---
// Prints a square where each row is a descending sequence of numbers.
void printDescendingNumberPattern(int n) {
    std::cout << "\n--- Descending Number Pattern (" << n << "x" << n << ") ---" << std::endl;
    // Outer loop for each row
    for (int i = 0; i < n; ++i) {
        // Inner loop prints numbers from n down to 1
        for (int j = n; j >= 1; --j) {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

// --- Pattern 3: Ascending Square Number Pattern ---
// Prints a square of numbers that continue sequentially.
void printAscendingSquarePattern(int n) {
    std::cout << "\n--- Ascending Square Number Pattern (" << n << "x" << n << ") ---" << std::endl;
    int count = 1; // A separate counter variable
    // Outer loop for rows
    for (int i = 0; i < n; ++i) {
        // Inner loop for columns
        for (int j = 0; j < n; ++j) {
            std::cout << count << " ";
            count++;
        }
        std::cout << std::endl;
    }
}

// --- Pattern 4: Ascending Alphabet Pattern ---
// Prints a square of letters that continue sequentially.
void printAlphabetPattern(int n) {
    std::cout << "\n--- Ascending Alphabet Pattern (" << n << "x" << n << ") ---" << std::endl;
    char current_char = 'A';
    // Outer loop for rows
    for (int i = 0; i < n; ++i) {
        // Inner loop for columns
        for (int j = 0; j < n; ++j) {
            std::cout << current_char << " ";
            current_char++;
        }
        std::cout << std::endl;
    }
}


int main() {
    int size;
    std::cout << "Enter the size for the patterns (e.g., 5): ";
    std::cin >> size;
    std::cout << std::endl;
    
    printSolidRectangle(size, size);
    printDescendingNumberPattern(size);
    printAscendingSquarePattern(size);
    printAlphabetPattern(size);

    return 0;
}
