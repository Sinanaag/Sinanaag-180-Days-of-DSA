#include <iostream>

int main() {
    // --- Declaring and Initializing Variables ---

    // int: for whole numbers
    int age = 30;

    // double: for high-precision decimal numbers (preferred over float)
    double pi_approx = 3.1415926535;

    // char: for single characters
    char initial = 'S';

    // bool: for true or false values
    bool isLearning = true;

    // --- Printing Variable Values ---
    std::cout << "--- Variable Values ---" << std::endl;
    std::cout << "My age is: " << age << std::endl;
    std::cout << "The value of PI is approximately: " << pi_approx << std::endl;
    std::cout << "My first initial is: " << initial << std::endl;
    std::cout << "Am I learning C++? (1 for true, 0 for false): " << isLearning << std::endl;
    std::cout << "\n";

    // --- Demonstrating Memory Size with sizeof() ---
    // The sizeof operator tells us how many bytes of memory a data type uses.
    std::cout << "--- Memory Allocation ---" << std::endl;
    std::cout << "Size of int: " << sizeof(int) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte" << std::endl;
    std::cout << "\n";

    // --- 'char' is secretly an integer (ASCII) ---
    std::cout << "--- Char and ASCII ---" << std::endl;
    char my_char = 'A';
    // By 'casting' the char to an int, we can see its underlying integer value.
    std::cout << "The character is: " << my_char << std::endl;
    std::cout << "Its ASCII value is: " << (int)my_char << std::endl;
    std::cout << "\n";
    
    // --- Note on 2's Complement ---
    // 2's complement is how the computer stores negative numbers in binary.
    // It is not something you typically code directly, but it's how `int x = -5;` works internally.
    // Example for -5 in 8 bits:
    // 1. Positive 5 in binary:       0000 0101
    // 2. Invert the bits (1's comp): 1111 1010
    // 3. Add 1 (2's comp):           1111 1011  <-- This is how -5 is stored.
    
    return 0;
}
