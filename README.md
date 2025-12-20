# 🌳 Holberton School — Binary Trees Project

> A comprehensive C implementation of Binary Trees, Binary Search Trees (BST),
> AVL Trees, and Binary Heaps  
> Built following Holberton School standards (GNU89, Betty style)

---

## 📌 Table of Contents
1. Project Overview
2. Data Structures
3. Project Architecture
4. File & Function Reference
5. Algorithm Visuals
6. Complexity Summary
7. How to Compile & Test
8. Glossary
9. Author

---

## 📖 Project Overview

This project is a complete implementation of **Binary Trees** in C.
It covers fundamental and advanced tree concepts, including:

- Tree traversal algorithms
- Structural validation (leaf, full, perfect, complete)
- Tree metrics (height, depth, size, balance)
- Binary Search Trees (BST)
- AVL Trees (self-balancing BST)
- Binary Heaps
- Tree rotations (left and right)

All implementations are:
- ✅ Betty compliant
- ✅ Modular and reusable
- ✅ Memory-safe
- ✅ Checker-ready

---

## 🧱 Data Structures

```c
typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

/* Type aliases */
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
Binary Tree
├── Traversals
│   ├── Preorder
│   ├── Inorder
│   ├── Postorder
│   └── Level-order
│
├── Properties
│   ├── Height
│   ├── Depth
│   ├── Size
│   ├── Leaves
│   ├── Nodes
│   ├── Balance
│   ├── Full
│   ├── Perfect
│   └── Complete
│
├── Relations
│   ├── Sibling
│   ├── Uncle
│   └── Lowest Common Ancestor
│
├── BST
│   └── Validation
│
├── AVL
│   ├── Validation
│   ├── Insertion
│   └── Array to AVL
│
└── Heap
    └── Validat

File & Function Reference
Core Creation

| File                   | Function           | Description                    |
| ---------------------- | ------------------ | ------------------------------ |
| `0-binary_tree_node.c` | `binary_tree_node` | Creates a new binary tree node |


Structural Checks
| File                            | Function                  | Description                |
| ------------------------------- | ------------------------- | -------------------------- |
| `4-binary_tree_is_leaf.c`       | `binary_tree_is_leaf`     | Checks if node is a leaf   |
| `5-binary_tree_is_root.c`       | `binary_tree_is_root`     | Checks if node is root     |
| `15-binary_tree_is_full.c`      | `binary_tree_is_full`     | Checks if tree is full     |
| `16-binary_tree_is_perfect.c`   | `binary_tree_is_perfect`  | Checks if tree is perfect  |
| `102-binary_tree_is_complete.c` | `binary_tree_is_complete` | Checks if tree is complete |

