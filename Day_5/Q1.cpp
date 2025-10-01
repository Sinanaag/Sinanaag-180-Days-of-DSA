#include <iostream>

// --- Problem 1: Factorial of a Number ---
// Calculates n! = n * (n-1) * ... * 1
void calculateFactorial() {
    int n;
    std::cout << "Enter a number to find its factorial: ";
    std::cin >> n;

    // Use 'long long' for the result to handle larger numbers, as factorials grow very quickly.
    long long factorial = 1;

    // Handle the edge case where n = 0
    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
        return;
    }
    
    // Loop from n down to 1
    for (int i = n; i >= 1; --i) {
        factorial *= i;
    }

    std::cout << "The factorial of " << n << " is " << factorial << "." << std::endl;
}

// --- Problem 2: Prime Number Check ---
void checkPrime() {
    int n;
    std::cout << "Enter a number to check if it's prime: ";
    std::cin >> n;

    if (n <= 1) {
        std::cout << n << " is not a prime number." << std::endl;
        return;
    }

    bool is_prime = true;
    // Loop from 2 up to n-1 to check for divisors
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            is_prime = false;
            break; // Found a divisor, no need to check further
        }
    }

    if (is_prime) {
        std::cout << n << " is a prime number." << std::endl;
    } else {
        std::cout << n << " is not a prime number." << std::endl;
    }
}

// --- Problem 3: Fibonacci Series ---
// Generates the series: 0, 1, 1, 2, 3, 5, 8, ...
void generateFibonacci() {
    int terms;
    std::cout << "Enter the number of Fibonacci terms to generate: ";
    std::cin >> terms;

    if (terms <= 0) return;

    int a = 0, b = 1; // Initialize the first two terms

    std::cout << "Fibonacci Series: ";

    for (int i = 1; i <= terms; ++i) {
        // Handle the first two terms separately
        if (i == 1) {
            std::cout << a << " ";
            continue;
        }
        if (i == 2) {
            std::cout << b << " ";
            continue;
        }

        // The core logic for the rest of the series
        int next = a + b;
        std::cout << next << " ";

        // Update a and b for the next iteration
        a = b;
        b = next;
    }
    std::cout << std::endl;
}

int main() {
    std::cout << "--- 1. Factorial Calculator ---" << std::endl;
    calculateFactorial();
    std::cout << "\n";

    std::cout << "--- 2. Prime Number Check ---" << std::endl;
    checkPrime();
    std::cout << "\n";

    std::cout << "--- 3. Fibonacci Series Generator ---" << std::endl;
    generateFibonacci();
    std::cout << "\n";

    return 0;
}
