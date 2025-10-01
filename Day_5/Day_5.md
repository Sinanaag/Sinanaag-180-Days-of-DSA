
# Day 5: Advanced `for` Loop Problems & Patterns

**Date:** October 01, 2025

Today was a deep dive into the power and versatility of `for` loops. I moved beyond simple counting and applied loops to solve a variety of mathematical and logical problems. This session really cemented my understanding of how to control loop behavior to achieve specific outcomes.

## 📝 Topics Covered

1.  **`for` Loop Mastery:**
    * **Custom Ranges & Steps:** Practiced printing numbers in various sequences, such as from `101` to `200`, in reverse order (`100` to `1`), and with a custom step/difference (e.g., `1, 4, 7...`).
    * **Character Iteration:** Printed the alphabets from `'a'` to `'z'`, reinforcing the concept that `char` types can be iterated like integers due to their ASCII values.

2.  **Mathematical Problems with Loops:**
    * **Multiplication Table:** Wrote a program to generate the multiplication table for any given number `n`.
    * **Power of a Number:** Implemented a function to calculate $a^b$ by multiplying `a` by itself `b` times.
    * **Summations:** Calculated the sum of the first 'n' natural numbers and the sum of the *squares* of the first 'n' natural numbers using loops.
    * **Factorial:** Wrote code to compute the factorial of a number `n` (n!).

3.  **Classic Loop-Based Algorithms:**
    * **Prime Number Check:** Revisited and solidified the logic for checking if a number is prime using a `for` loop to find potential divisors.
    * **Fibonacci Series:** This was a key algorithm. I learned how to generate the Fibonacci sequence (`0, 1, 1, 2, 3, 5, ...`) by keeping track of the two previous numbers and calculating the next one in each iteration.

## 🤔 Key Takeaways

* The `for` loop is not just for counting. It's a powerful tool for **accumulation** (like summing numbers), **generation** (like creating a Fibonacci series), and **searching** (like finding factors of a number).
* Solving a problem with a loop requires identifying the core repeating pattern. For Fibonacci, the pattern is `next = a + b`, and then updating `a` and `b` for the next cycle.
* Thinking about **edge cases** is crucial. For factorials, `0! = 1`. For prime numbers, `0` and `1` are not prime. Good code handles these special conditions.
