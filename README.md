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
- `0-binary_tree_node.c` — Defines binary tree structures and function prototypes
- `binary_trees.h` — Creates and initializes a new binary tree node

### Insertions
- `1-binary_tree_insert_left.c`
- `2-binary_tree_insert_right.c`

### Traversals
- `6-binary_tree_preorder.c`
- `7-binary_tree_inorder.c`
- `8-binary_tree_postorder.c`
- `101-binary_tree_levelorder.c`

### Structural Measurements
- `9-binary_tree_height.c`
- `10-binary_tree_depth.c`
- `11-binary_tree_size.c`
- `12-binary_tree_leaves.c`
- `13-binary_tree_nodes.c`
- `14-binary_tree_balance.c`

### Binary Tree Properties
- `4-binary_tree_is_leaf.c`
- `5-binary_tree_is_root.c`
- `15-binary_tree_is_full.c`
- `16-binary_tree_is_perfect.c`
- `102-binary_tree_is_complete.c`

### Relationships
- `17-binary_tree_sibling.c`
- `18-binary_tree_uncle.c`
- `100-binary_trees_ancestor.c`

### Rotations
- `103-binary_tree_rotate_left.c`
- `104-binary_tree_rotate_right.c`

### Binary Search Trees
- `110-binary_tree_is_bst.c`

### AVL Trees
- `120-binary_tree_is_avl.c`
- `121-avl_insert.c`
- `122-array_to_avl.c`

### Binary Heaps
- `130-binary_tree_is_heap.c`

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

