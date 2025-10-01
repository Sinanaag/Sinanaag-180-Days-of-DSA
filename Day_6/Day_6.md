
# Day 6: Nested Loops & Pattern Printing

**Date:** October 02, 2025

Today was all about diving into the world of nested loops. The main goal was to understand how a loop running inside another loop can be used to create 2D patterns with characters, numbers, and stars. This exercise was a fantastic way to build a strong mental model of loop execution flow.

## 📝 Topics Covered

1.  **Nested Loops Fundamentals:**
    * **Core Concept:** A nested loop is a loop inside another loop. The inner loop executes its full cycle for each single iteration of the outer loop.
    * **Row-Column Model:** This is the key insight for patterns. The **outer loop** is typically responsible for controlling the **rows**, and the **inner loop** controls the **columns** within each row.

2.  **Pattern Printing Practice:**
    * **Solid Rectangle:** Started with the basics by printing a solid rectangle of stars (`*`), which establishes the fundamental row-column structure.
    * **Number Patterns:**
        * Printed various numeric grids, including squares of numbers in ascending and descending order.
        * Practiced creating patterns where the number printed depends on the row or column number.
    * **Alphabet Patterns:**
        * Learned to use `char` variables as loop counters (e.g., `for (char c = 'A'; c <= 'E'; c++)`).
        * Utilized the underlying **ASCII values** of characters to perform arithmetic and generate sequential alphabet patterns.

3.  **Debugging:**
    * Briefly touched on how to debug nested loops by mentally "dry running" the code—tracking the values of the loop variables (`i` and `j`) on paper to see how the pattern is formed step-by-step.

## 🤔 Key Takeaways

* **Think in Rows and Columns:** For any 2D pattern, the first step is to model it as a grid. The outer loop will run `rowCount` times. The inner loop will run `columnCount` times for each row.
* **The "What to Print" Logic:** The real creativity in patterns comes from deciding what to print inside the inner loop. It can be a static character (`*`), the outer loop variable (`i`), the inner loop variable (`j`), or a separate counter that increments with each print.
* **Character Arithmetic is Powerful:** Treating characters like numbers (e.g., `'A' + 1` results in `'B'`) is a powerful technique for creating alphabet-based patterns.
