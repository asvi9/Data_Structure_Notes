# 📚 Data Structure Notes in C

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue" alt="C Language">
  <img src="https://img.shields.io/badge/Level-Beginner%20to%20Advanced-green" alt="Level">
  <img src="https://img.shields.io/badge/Code%20Examples-Yes-orange" alt="Examples">
</p>

<p align="center">
  <b>Complete Data Structures notes with C implementations</b><br>
  <i>Faculty: Ashwani Mishra</i>
</p>

---

## 📖 About This Repository

This repository contains comprehensive notes on Data Structures using C programming language. The material is organized into 4 units, covering everything from basic arrays to advanced trees and hashing techniques.

---

## 📑 Course Structure

| Unit | Topic | Difficulty | Hours |
|------|-------|------------|-------|
| **I** | Arrays and Matrix Representations | 🟢 Beginner | 8-10 hrs |
| **II** | Linear Data Structures (Stacks, Queues, Linked Lists) | 🟡 Intermediate | 12-15 hrs |
| **III** | Sorting Algorithms & Statistics | 🟠 Intermediate-Advanced | 10-12 hrs |
| **IV** | Trees, Hashing & Advanced Structures | 🔴 Advanced | 15-18 hrs |

---

## 📌 Unit I: Arrays and Matrix Representations

**Topics Covered:**
- Single and Multidimensional Arrays
- Sparse Arrays implementation
- Lower and Upper Triangular Matrices
- Tridiagonal Space Matrices
- Memory allocation strategies

```c
// Example: Sparse Matrix Representation
typedef struct {
    int row;
    int col;
    int value;
} SparseElement;
