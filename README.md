# 📊 Data Structure Notes in C

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" alt="C Language">
  <img src="https://img.shields.io/badge/Topic-Data%20Structures-orange?style=for-the-badge" alt="Data Structures">
  <img src="https://img.shields.io/badge/Difficulty-Beginner%20to%20Advanced-green?style=for-the-badge" alt="Difficulty">
</p>

<p align="center">
  <b>Complete C programming notes covering all fundamental data structures and algorithms across 4 comprehensive units</b>
</p>

<hr>

## 📋 Table of Contents
- [Course Overview](#-course-overview)
- [Units Breakdown](#-units-breakdown-based-on-provided-syllabus)
- [Learning Path](#-learning-path)
- [Key Features](#-key-features)
- [Learning Outcomes](#-learning-outcomes)
- [Prerequisites](#-prerequisites)
- [Difficulty Progression](#-difficulty-progression)
- [Recommended Books](#-recommended-books)
- [Topics for Further Study](#-topics-for-further-study)

<hr>

## 📚 Course Overview

<div align="center">
  
| 🎯 | 📖 | 💻 | ⚡ |
|---|---|---|---|
| Complete Coverage | Theory + Practical | C Implementations | Complexity Analysis |
| 4 Units | Step-by-Step | Memory Efficient | Interview Focused |

</div>

This comprehensive guide provides **theoretical foundations** and **practical C implementations** for all major data structures, following standard syllabus patterns with real-world applications.

<hr>

## 📖 Units Breakdown (Based on Provided Syllabus)

<details>
<summary><b>📦 Unit I: Arrays and Matrix Representations</b> (Beginner Level) ⬇️</summary>
<br>

| Topic | Description |
|-------|-------------|
| **Single and Multidimensional Arrays** | Memory representation and operations in C |
| **Sparse Arrays** | Efficient implementation and optimization techniques |
| **Lower and Upper Triangular Matrices** | Memory-efficient storage strategies |
| **Tridiagonal Space Matrices** | Vector representation and operations |
| **Memory Allocation** | Static vs Dynamic allocation strategies for matrix operations |

> 💡 **Focus**: Understanding how data is organized in memory and optimizing storage for special matrices

</details>

<details>
<summary><b>🔗 Unit II: Linear Data Structures and Trees</b> (Intermediate Level) ⬇️</summary>
<br>

| Structure | Implementations | Applications |
|-----------|-----------------|--------------|
| **Stacks** | Array & Linked implementation | Expression evaluation, backtracking |
| **Queues** | Linear, Circular, Priority | Scheduling, BFS |
| **Singly Linked Lists** | Insert, Delete, Search | Dynamic memory management |
| **Doubly Linked Lists** | Forward/Backward traversal | Browser history, undo operations |
| **Circular Linked Lists** | Circular traversal | Round-robin scheduling |
| **Rooted Trees** | Various representations | Hierarchical data storage |

> 💡 **Focus**: Understanding pointers, dynamic memory allocation, and building blocks of complex structures

</details>

<details>
<summary><b>⚡ Unit III: Sorting Algorithms and Statistics</b> (Intermediate-Advanced) ⬇️</summary>
<br>

| Algorithm | Time Complexity | Space | Stability |
|-----------|-----------------|-------|-----------|
| **Heap Sort** | O(n log n) | O(1) | ❌ Not Stable |
| **Quick Sort** | O(n log n) avg / O(n²) worst | O(log n) | ❌ Not Stable |
| **Counting Sort** | O(n + k) | O(k) | ✅ Stable |
| **Radix Sort** | O(d × (n + k)) | O(n + k) | ✅ Stable |
| **Bucket Sort** | O(n) avg | O(n) | ✅ Stable |
| **Order Statistics** | O(n) avg | O(1) | N/A |

> 💡 **Focus**: Algorithm efficiency analysis and when to use which sorting technique

</details>

<details>
<summary><b>🌳 Unit IV: Trees, Hashing, and Advanced Structures</b> (Advanced Level) ⬇️</summary>
<br>

### 🌲 Binary Trees & BST
- **Traversals**: Inorder, Preorder, Postorder (Recursive & Iterative)
- **Operations**: Insertion, Deletion, Search
- **Balancing**: Properties and importance

### 📚 B-Trees
- Multiway search trees
- Database indexing applications
- Insertion and Deletion operations

### 🔑 Hash Tables
| Technique | Description | Collision Resolution |
|-----------|-------------|---------------------|
| Direct Address Tables | Perfect hashing | No collisions |
| Division Method | h(k) = k mod m | Chaining |
| Multiplication Method | h(k) = ⌊m(kA mod 1)⌋ | Open Addressing |
| Universal Hashing | Random selection | Linear/Quadratic Probing |

> 💡 **Focus**: Advanced data structures for efficient searching and indexing

</details>

<hr>

## 🗺️ Learning Path

```mermaid
graph LR
    A[Unit I: Arrays] --> B[Unit II: Linear Structures]
    B --> C[Unit III: Sorting]
    C --> D[Unit IV: Trees & Hashing]
    style A fill:#f9f,stroke:#333
    style B fill:#bbf,stroke:#333
    style C fill:#bfb,stroke:#333
    style D fill:#fbb,stroke:#333
