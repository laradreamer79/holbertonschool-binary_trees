# Binary Trees in C
Holberton School — Low Level Programming

This repository contains my implementation of binary tree data structures
as part of the Holberton School curriculum. The project focuses on building
a strong understanding of hierarchical data structures, tree traversal
algorithms, structural validation, and self-balancing trees.

The work progresses from basic binary tree operations to more advanced
structures such as Binary Search Trees (BST), AVL Trees, and Binary Heaps.

---

## Table of Contents

- Learning Objectives
- Data Structure Definition
- Project Organization
- Tree Traversals
- Tree Measurements
- Tree Properties
- Binary Search Trees
- AVL Trees
- Binary Heaps
- Tree Rotations
- Compilation and Testing
- Glossary
- Author

---

## Learning Objectives

This project allowed me to practice and understand:

- Recursive data structures
- Tree traversal strategies
- Measuring and validating tree properties
- Differences between BST, AVL, and Heap trees
- Tree balancing using rotations
- Writing clean, modular, and Betty-compliant C code

---

## Data Structure Definition

All trees in this project are based on the following structure:

```c
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;
Type aliases are used to represent specific tree types:

c
Copy code
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
Project Organization
The project is implemented incrementally. Core helper functions such as
tree traversal, height calculation, and balance measurement are reused
across multiple tasks. Advanced tree types rely on previously implemented
logic to ensure consistency and correctness.

Tree Traversals
The following traversal algorithms are implemented:

Preorder traversal (Root → Left → Right)

Inorder traversal (Left → Root → Right)

Postorder traversal (Left → Right → Root)

Level-order traversal (Breadth-first traversal)

Traversal functions use recursion or queue-based logic depending on the
strategy.

Tree Measurements
Several functions are provided to analyze tree structure:

Height: longest path from a node to a leaf

Depth: distance from a node to the root

Size: total number of nodes

Leaves: number of leaf nodes

Nodes: number of internal nodes

Balance factor: difference between left and right subtree heights

These measurements are reused in validation and balancing operations.

Tree Properties
The following tree properties can be validated:

Leaf node

Root node

Full binary tree

Perfect binary tree

Complete binary tree

Each property follows its formal definition and is checked recursively.

Binary Search Trees (BST)
BST validation ensures that:

Values in the left subtree are strictly smaller than the node

Values in the right subtree are strictly greater than the node

No duplicate values exist

Range-based recursion is used to guarantee correctness.

AVL Trees
AVL trees extend BSTs by enforcing strict balance constraints.
This project includes:

AVL tree validation

AVL insertion with automatic rebalancing

Conversion of an array into an AVL tree

Balancing is achieved using left and right rotations based on the balance
factor of each node.

Binary Heaps
Binary heap validation confirms that a tree:

Is complete

Satisfies the max-heap property

Index-based traversal is used to efficiently verify completeness.

Tree Rotations
Rotations are implemented to support AVL balancing:

Left rotation

Right rotation

Rotations preserve tree ordering while reducing height imbalance.

Compilation and Testing
All files are compiled using the following flags:

bash
Copy code
gcc -Wall -Wextra -Werror -pedantic -std=gnu89
Example compilation:

bash
Copy code
gcc binary_tree_print.c <file>.c 0-binary_tree_node.c -o test
./test
Code style is verified using:

bash
Copy code
betty <file>.c
Glossary
Binary Tree
A hierarchical structure where each node has at most two children.

Traversal
The process of visiting each node in a tree in a defined order.

Height
The number of edges on the longest path from a node to a leaf.

Depth
The number of edges from a node to the root.

Balance Factor
The difference between the heights of the left and right subtrees.

Binary Search Tree (BST)
A binary tree where left subtree values are smaller and right subtree values
are greater than the node.

AVL Tree
A self-balancing binary search tree.

Binary Heap
A complete binary tree that satisfies the heap property.

Rotation
An operation that restructures a tree to restore balance.

Author
Lara Alzannan And Afnan Alfaidi
