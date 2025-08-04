# Geeks for Geeks - Qualcomm Interview Questions

This repository contains solutions to commonly asked coding interview questions at Qualcomm, sourced from GeeksforGeeks. Each solution is implemented in C++ and focuses on fundamental data structures and algorithms concepts.

## 📁 Repository Structure

| File Name | Problem | Time Complexity | Space Complexity |
|-----------|---------|-----------------|------------------|
| `Check_for_BST.cpp` | Check if Binary Tree is BST | O(n) | O(h) |
| `Find_the_Length_of_Loop.cpp` | Length of Loop in Linked List | O(n) | O(1) |
| `Implement_strstr.cpp` | Implement strStr() Function | O(n*m) | O(1) |
| `Left_View_of_Binary_Tree.cpp` | Left View of Binary Tree | O(n) | O(w) |
| `Reverse_a_linked_list.cpp` | Reverse a Linked List | O(n) | O(1) |
| `Reverse_Bits.cpp` | Reverse Bits of a Number | O(32) | O(1) |
| `sort_0_1and_2.cpp` | Sort Array of 0s, 1s, and 2s | O(n) | O(1) |

*Where n = number of nodes/elements, h = height of tree, w = maximum width of tree, m = pattern length*

## 🔍 Problem Descriptions

### 1. Check for BST (`Check_for_BST.cpp`)
**Problem**: Given a binary tree, check if it's a valid Binary Search Tree (BST).

**Approach**: Uses recursive validation with min-max bounds for each node.

**Key Concepts**: 
- Binary Search Tree properties
- Tree traversal
- Boundary checking

---

### 2. Find the Length of Loop (`Find_the_Length_of_Loop.cpp`)
**Problem**: Given a linked list, find the length of the loop if it exists.

**Approach**: Floyd's Cycle Detection Algorithm (Tortoise and Hare) to detect loop, then count nodes in the loop.

**Key Concepts**:
- Floyd's Cycle Detection
- Two-pointer technique
- Linked list traversal

---

### 3. Implement strstr (`Implement_strstr.cpp`)
**Problem**: Implement the strStr() function to find the first occurrence of a pattern in a text.

**Approach**: Brute force pattern matching algorithm.

**Key Concepts**:
- String matching
- Pattern searching
- Nested loops optimization

---

### 4. Left View of Binary Tree (`Left_View_of_Binary_Tree.cpp`)
**Problem**: Print the left view of a binary tree (leftmost node at each level).

**Approach**: Level-order traversal (BFS) using queue, capturing the first node at each level.

**Key Concepts**:
- Binary tree traversal
- Breadth-First Search (BFS)
- Queue data structure

---

### 5. Reverse a Linked List (`Reverse_a_linked_list.cpp`)
**Problem**: Reverse a singly linked list iteratively.

**Approach**: Three-pointer technique to reverse links between nodes.

**Key Concepts**:
- Linked list manipulation
- Pointer operations
- Iterative reversal

---

### 6. Reverse Bits (`Reverse_Bits.cpp`)
**Problem**: Reverse the bits of a 32-bit unsigned integer.

**Approach**: Extract each bit from right to left and build the reversed number.

**Key Concepts**:
- Bit manipulation
- Bitwise operations
- Binary representation

---

### 7. Sort 0s, 1s, and 2s (`sort_0_1and_2.cpp`)
**Problem**: Sort an array containing only 0s, 1s, and 2s in a single pass.

**Approach**: Dutch National Flag Algorithm using three pointers (low, mid, high).

**Key Concepts**:
- Dutch National Flag Algorithm
- Three-pointer technique
- In-place sorting

## 🚀 How to Run

### Prerequisites
- C++ compiler (g++, clang++, or Visual Studio)
- Basic understanding of C++ and data structures

### Compilation and Execution
```bash
# Compile any solution
g++ -o solution <filename>.cpp

# Example: Compile and run BST checker
g++ -o bst_check Check_for_BST.cpp
./bst_check
```

### For Visual Studio Code
1. Install C++ extension
2. Open any `.cpp` file
3. Press `Ctrl+F5` to compile and run

## 📚 Topics Covered

- **Data Structures**: Binary Trees, Linked Lists, Arrays
- **Algorithms**: Tree Traversal, Sorting, Searching, Pattern Matching
- **Techniques**: Two Pointers, Floyd's Cycle Detection, Dutch National Flag
- **Concepts**: Bit Manipulation, BFS, Recursion, Iterative Solutions

## 🎯 Interview Tips

1. **Time Complexity**: Always analyze and mention the time complexity of your solution
2. **Space Complexity**: Consider space optimization wherever possible
3. **Edge Cases**: Handle null inputs, empty arrays, and boundary conditions
4. **Code Quality**: Write clean, readable code with meaningful variable names
5. **Alternative Approaches**: Be prepared to discuss multiple approaches for each problem

## 🏢 About Qualcomm Interviews

These problems represent the type of coding questions commonly asked in Qualcomm technical interviews. They test:

- **Fundamental CS concepts**: Data structures and algorithms
- **Problem-solving skills**: Breaking down complex problems
- **Coding proficiency**: Writing efficient, bug-free code
- **Optimization thinking**: Time and space complexity analysis

## 📖 Additional Resources

- [GeeksforGeeks](https://www.geeksforgeeks.org/) - Original problem sources
- [LeetCode](https://leetcode.com/) - Similar practice problems
- [HackerRank](https://www.hackerrank.com/) - Coding practice platform

## 🤝 Contributing

Feel free to:
- Add more optimized solutions
- Include additional test cases
- Add solutions in other programming languages
- Improve documentation

## 📝 License

This repository is for educational purposes. Please respect GeeksforGeeks' terms of service when using their content.

---

**Happy Coding! 🚀**

*Prepared for DAA Assignments - Semester 5*
