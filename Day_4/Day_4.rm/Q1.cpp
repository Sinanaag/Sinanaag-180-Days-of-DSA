
#include <iostream>

// --- Problem 1: Marks Grading System ---
void gradeCalculator() {
    int marks;
    std::cout << "Enter your marks (0-100): ";
    std::cin >> marks;

    if (marks >= 90) {
        std::cout << "Grade: A+" << std::endl;
    } else if (marks >= 80) {
        std::cout << "Grade: A" << std::endl;
    } else if (marks >= 70) {
        std::cout << "Grade: B" << std::endl;
    } else if (marks >= 60) {
        std::cout << "Grade: C" << std::endl;
    } else if (marks >= 50) {
        std::cout << "Grade: D" << std::endl;
    } else {
        std::cout << "Grade: F (Fail)" << std::endl;
    }
}

// --- Problem 2: Vowel Checker ---
void checkVowel() {
    char c;
    std::cout << "Enter a character: ";
    std::cin >> c;

    // Convert to lowercase to simplify the check
    c = tolower(c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        std::cout << c << " is a vowel." << std::endl;
    } else {
        std::cout << c << " is a consonant." << std::endl;
    }
}

// --- Problem 3: Print Even Numbers with a for loop ---
void printEvenNumbers() {
    int limit;
    std::cout << "Enter an upper limit: ";
    std::cin >> limit;

    std::cout << "Even numbers up to " << limit << " are: ";
    // Loop from 1 to the limit
    for (int i = 1; i <= limit; i++) {
        // Use the modulus operator to check if 'i' is even
        if (i % 2 == 0) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}


int main() {
    std::cout << "--- 1. Grade Calculator ---" << std::endl;
    gradeCalculator();
    std::cout << "\n";

    std::cout << "--- 2. Vowel Checker ---" << std::endl;
    checkVowel();
    std::cout << "\n";

    std::cout << "--- 3. Print Even Numbers ---" << std::endl;
    printEvenNumbers();
    std::cout << "\n";
    
    return 0;
}
