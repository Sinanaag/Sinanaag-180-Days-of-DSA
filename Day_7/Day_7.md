# Day 7: Triangular & Pyramid Patterns

**Date:** October 02, 2025

Today, I built upon my knowledge of nested loops to create non-rectangular shapes like triangles and pyramids. The key trick is making the inner loop's iterations dependent on the current iteration of the outer loop.

## 📝 Topics Covered

* **Half Pyramid:** The inner loop runs from `j=1` to `j<=i`. As the row number `i` increases, the number of columns `j` printed in that row also increases.
* **Inverted Half Pyramid:** The inner loop runs from `j=i` down to `j>=1` or `j=n` down to `j>=i`. The number of columns decreases as the row number `i` increases.
* **Full Pyramid:** This involves three parts within the outer loop: a loop for leading spaces, a loop for the ascending part of the pyramid, and a loop for the descending part.
