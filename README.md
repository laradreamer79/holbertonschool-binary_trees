# Binary Trees in C

## Overview

This project implements binary tree data structures and algorithms in C, covering core tree operations and advanced structures such as Binary Search Trees (BST), AVL Trees, and Binary Heaps.

---

## Table of Contents

- [Data Structure Definition](#data-structure-definition)
- [File Organization](#file-organization)
- [Tree Creation and Insertion](#tree-creation-and-insertion)
- [Tree Traversals](#tree-traversals)
- [Structural Measurements](#structural-measurements)
- [Binary Tree Properties](#binary-tree-properties)
- [Binary Search Trees (BST)](#binary-search-trees-bst)
- [Tree Rotations](#tree-rotations)
- [AVL Trees](#avl-trees)
- [Binary Heaps](#binary-heaps)
- [Compilation and Usage](#compilation-and-usage)
- [Glossary](#glossary)
- [Author](#author)

---

## Data Structure Definition
```c

typedef struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

```

## File Organization

### Core Structure
- `binary_trees.h` — Defines binary tree structures and function prototypes
- `0-binary_tree_node.c` — Creates and initializes a new binary tree node
- `3-binary_tree_delete.c` — Frees an entire binary tree

### Insertions
- `1-binary_tree_insert_left.c` — Inserts a node as the left child
- `2-binary_tree_insert_right.c` — Inserts a node as the right child

### Traversals
- `6-binary_tree_preorder.c` — Preorder traversal (Root → Left → Right)
- `7-binary_tree_inorder.c` — Inorder traversal (Left → Root → Right) 
- `8-binary_tree_postorder.c` — Postorder traversal (Left → Right → Root)
- `101-binary_tree_levelorder.c` — Level-order (breadth-first) traversal

### Structural Measurements
- `9-binary_tree_height.c` — Computes the height of a binary tree
- `10-binary_tree_depth.c` — Computes the depth of a node
- `11-binary_tree_size.c` - Computes total number of nodes 
- `12-binary_tree_leaves.c` — Counts leaf nodes 
- `13-binary_tree_nodes.c` — Counts internal nodes
- `14-binary_tree_balance.c` — Computes balance factor

### Binary Tree Properties
- `4-binary_tree_is_leaf.c` — Checks if a node is a leaf 
- `5-binary_tree_is_root.c` — Checks if a node is the root 
- `15-binary_tree_is_full.c` — Checks if a tree is full
- `16-binary_tree_is_perfect.c` — Checks if a tree is perfect
- `102-binary_tree_is_complete.c` — Checks if a tree is complete

### Relationships
- `17-binary_tree_sibling.c` — Finds the sibling of a node 
- `18-binary_tree_uncle.c` — Finds the uncle of a node  
- `100-binary_trees_ancestor.c` — Finds the lowest common ancestor

### Rotations
- `103-binary_tree_rotate_left.c` — Performs a left rotation 
- `104-binary_tree_rotate_right.c` — Performs a right rotation

### Binary Search Trees
- `110-binary_tree_is_bst.c` — Validates Binary Search Tree propertie

### AVL Trees
- `120-binary_tree_is_avl.c` — Checks if a tree is a valid AVL tree
- `121-avl_insert.c` — Inserts a value into an AVL tree
- `122-array_to_avl.c`  — Builds an AVL tree from 

### Binary Heaps
- `130-binary_tree_is_heap.c` — Validates max binary heap properties

---

## Tree Creation and Insertion

Nodes are dynamically allocated and linked using `parent`, `left`, and `right` pointers.  
Insertion functions preserve existing subtrees and ensure correct parent assignment.

---

## Tree Traversals

| Traversal    | Order               |
|-------------|---------------------|
| Preorder    | Root → Left → Right |
| Inorder     | Left → Root → Right |
| Postorder   | Left → Right → Root |
| Level-order | Breadth-first       |

---

## Structural Measurements

- Height  
- Depth  
- Size  
- Leaf count  
- Internal node count  
- Balance factor  

---

## Binary Tree Properties

- Leaf node  
- Root node  
- Full binary tree  
- Perfect binary tree  
- Complete binary tree  

Completeness is verified using index-based traversal.

---

## Binary Search Trees (BST)

BST validation ensures:
- Strict ordering  
- No duplicate values  
- Recursive min/max constraints  

---

## Tree Rotations

- Left rotation  
- Right rotation  

Rotations preserve in-order traversal.

---

## AVL Trees

- AVL validation  
- AVL insertion with rebalancing  
- Array-to-AVL conversion  
- LL, RR, LR, RL rotations  

---

## Binary Heaps

- Tree completeness  
- Max-heap property  
- Index-based validation  

---

## Compilation and Usage

gcc -Wall -Wextra -Werror -pedantic -std=gnu89

## Example
gcc binary_tree_print.c 103-binary_tree_rotate_left.c \
0-binary_tree_node.c -o test
./test

## Glossary

- **Binary Tree** — Tree with up to two children per node  
- **Node** — Data element containing a value and links to other nodes  
- **Root** — Node without a parent  
- **Leaf** — Node without children  
- **Sibling** — Nodes sharing the same parent  
- **Uncle** — Parent’s sibling  
- **Ancestor** — Any node on the path from a node to the root  
- **Traversal** — Ordered visitation of tree nodes  
- **Height** — Longest path from a node to a leaf  
- **Depth** — Distance from a node to the root  
- **Balance Factor** — Difference between left and right subtree heights  
- **BST** — Binary Search Tree with strict ordering rules  
- **AVL Tree** — Self-balancing Binary Search Tree  
- **Heap** — Complete binary tree with ordering constraints  
- **Rotation** — Structural operation used to rebalance a tree  

---

## Author

**Lara Alzannan And Afnan Alfaidi** 

