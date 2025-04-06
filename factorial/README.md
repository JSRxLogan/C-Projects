# 🔢 Factorial Calculator (Big Integer Support) – C++

This project calculates the factorial of large numbers using string manipulation to handle big integers beyond built-in data type limits. Unlike the standard integer approach, this logic simulates manual multiplication for precise control and performance.

---

## 📌 Features

- Supports factorials of **very large numbers**.
- Handles **big integer multiplication and addition** using strings.
- Written in **pure C++**, no external libraries used.
- Optimized with **custom carry-over logic**.

---

## 💡 Logic Summary

The core logic replicates how we manually do multiplication and addition on paper:
- Converts numbers to strings.
- Multiplies each digit with carry handling.
- Adds intermediate results with correct place-value shifts.
- Stores results in string format to avoid overflow.

---

## 🛠️ How to Run

1. Make sure you have a C++ compiler installed (`g++` recommended).
2. Compile the code:

   ```bash
   g++ factorial.cpp -o factorial
