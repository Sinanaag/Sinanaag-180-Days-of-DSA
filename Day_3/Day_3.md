
# Day 3: Data Storage, Variables & Primitive Data Types

**Date:** September 28, 2025

Today, I delved deeper into the connection between hardware and software. The focus was on how data is physically stored and how we, as programmers, can manipulate that data using variables and data types in C++.

## 📝 Topics Covered

1.  **Low-Level Data Storage:**
    * **Transistors:** Revisited how transistors act as switches to store a binary `1` (ON) or `0` (OFF), forming the basis of all computer memory.
    * **ASCII Table:** Learned that characters are just numbers in disguise. The ASCII standard provides a mapping from characters like 'A' or '$' to integer values that can be stored in binary.

2.  **C++ Basics: Variables and Data Types:**
    * **Variables:** Understood that a variable is a named container for a value in memory.
    * **Data Types:** A data type tells the compiler how much memory to allocate for a variable and how to interpret the binary data stored there.

3.  **Primitive Data Types in C++:**
    * `int`: Used for storing whole numbers (e.g., `-100`, `0`, `42`).
    * `char`: Used for single characters (e.g., `'a'`, `'%'`). It actually stores a small integer (the ASCII value).
    * `float` and `double`: Used for floating-point (decimal) numbers. `double` offers greater precision.
    * `bool`: Represents boolean values, holding either `true` or `false`.

4.  **Integer Representation in Memory:**
    * Learned how computers store negative integers.
    * **1's Complement:** A method of representing negative numbers by inverting all the bits of the positive equivalent.
    * **2's Complement:** The standard used by modern computers. It is calculated by taking the 1's complement and adding 1. This method makes binary arithmetic for both positive and negative numbers much simpler for the hardware.

## 🤔 Key Takeaways

* A **data type is a contract** with the compiler. When I declare `int my_age;`, I am telling the compiler: "Reserve enough memory for an integer and interpret the bits you find there as a whole number using 2's complement for negatives."
* The `char` data type is a bridge between numbers and text. `char c = 'A';` and `char c = 65;` result in the same value being stored because of the ASCII mapping.
* **2's complement** is the reason computer arithmetic "just works" with negative numbers at the hardware level. It's an elegant solution to a complex problem.
