C - Binary Trees

Project description:
An implementation of binary tree data structures, covering basic binary trees, Binary Search Trees (BST), AVL trees (self-balancing Binary Search Trees), and Max Binary Heaps. This project demonstrates fundamental tree operations, traversal methods, and tree property analysis.
----------------------
Learning objective:

Binary Trees: Hierarchical data structures where each node has at most two children
Binary Search Tree (BST): Special binary trees with the ordered property (left child < parent < right child)
Performance Benefits: Time complexity advantages over linked lists for search, insert, and delete operations
Tree Metrics: How to calculate depth, height, and size of binary trees
Traversal Methods: Implementation of in-order, pre-order, post-order, and level-order traversals
Tree Classifications: Differences between complete, full, perfect, and balanced binary trees
----------------
The requirements:

-Allowed editors: vi, vim, emacs
-All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
-All files should end with a new line
-A README.md file, at the root of the folder of the project, is mandatory
-Code should use the Betty style. (checked using betty-style.pl and betty-doc.pl
-Not allowed to use global variables
-No more than 5 functions per file
-Allowed to use the standard library
-The main.c files are used to test functions.
-Holberton school will use their own main.c files at compilation. Their main.c files might be different from the one shown in the files.
-The prototypes of all functions are included in header file called binary_trees.h
-All header file include guarded
----------------------------------------
files: (in a table)


| File                      |  Prototype                              | Task requirement 					     |
| --------------------------| ----------------------------------------| -------------------------------------------------------------|
|0-binary_tree_node.c       | binary_tree_t *binary_tree_node(binary_tree_t *parent, int value); | function that creates binary tree node |

|1-binary_tree_insert_left.c | binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value); | function inserts node as left-child of another node|

|2-binary_tree_insert_right.c | binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value); | function inserts node as right-child of another node|

|3-binary_tree_delete.c | void binary_tree_delete(binary_tree_t *tree); | function deletes entire binary tree|

|4-binary_tree_is_leaf.c | int binary_tree_is_leaf(const binary_tree_t *node); | function checks if node is leaf|

|5-binary_tree_is_root.c | int binary_tree_is_root(const binary_tree_t *node); | function checks if given node is root|

|6-binary_tree_preorder.c | void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)); | func goes through binary tree using pre-order traversal|

|7-binary_tree_inorder.c | void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int)); | func that goes through a binary tree using in-order traversal|

|8-binary_tree_postorder.c | void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int)); | func goes through binary tree using post-order traversal|

|9-binary_tree_height.c | size_t binary_tree_height(const binary_tree_t *tree); | function that measures the height of binary tree|

|10-binary_tree_depth.c | size_t binary_tree_depth(const binary_tree_t *tree); | function measures depth of node in binary tree|

|11-binary_tree_size.c | size_t binary_tree_size(const binary_tree_t *tree); | function measures size of binary tree|

|12-binary_tree_leaves.c | size_t binary_tree_leaves(const binary_tree_t *tree); | function counts leaves in binary tree|

|13-binary_tree_nodes.c | size_t binary_tree_nodes(const binary_tree_t *tree); | func counts nodes with at least 1 child in binary tree|

|14-binary_tree_balance.c | int binary_tree_balance(const binary_tree_t *tree); | func measures balance factor of binary tree|

|15-binary_tree_is_full.c | int binary_tree_is_full(const binary_tree_t *tree); | function that checks if a binary tree is full|

|16-binary_tree_is_perfect.c | int binary_tree_is_perfect(const binary_tree_t *tree); | function that checks if a binary tree is perfect|

|17-binary_tree_siblings.c | binary_tree_t *binary_tree_sibling(binary_tree_t *node); | function that finds the sibling of a node|

|18-binary_tree_uncle.c | binary_tree_t *binary_tree_uncle(binary_tree_t *node); | function that finds the uncle of a node|

|14-binary_tree_insert_left.c | binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value); | function that inserts a node as the left-child of another node|

=======================================================
Development Environment:

-Operating System: Ubuntu 20.04 LTS
-Compiler: gcc
-Compiler Flags: -Wall -Werror -Wextra -pedantic -std=gnu89
-Compiling ex: gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c 1-main.c 1-binary_tree_insert_left.c 0-binary_tree_node.c -o 1-left
-Style Guide: Betty coding style compliance
========================================================

Time complexity comparison:
Operation	Linked List	Binary Tree (Balanced)	Binary Tree (Worst Case)
Search	O(n)	O(log n)	O(n)			O(n)
Insert	O(1)*	O(log n)	O(n)			O(n)
Delete	O(n)	O(log n)	O(n)			O(n)
=================================================================================

Output examples:

./0-node

.-------(098)-------.
  .--(012)--.         .--(402)--.
(006)     (016)     (256)     (512)  
-------------------------------------------

./1-left

  .--(098)--.
(012)     (402)

       .--(098)-------.
  .--(054)       .--(402)
(012)          (128)    
-----------------------------------------

./2-right

  .--(098)--.
(012)     (402)

       .--(098)-------.
  .--(054)       .--(402)
(012)          (128) 
----------------------------------------

./3-del

 .-------(098)--.
(012)--.       (128)--.
     (054)          (402)
----------------------------------------

./4-leaf

.-------(098)--.
(012)--.       (128)--.
     (054)          (402)
Is 98 a leaf: 0
Is 128 a leaf: 0
Is 402 a leaf: 1
--------------------------------------

Authors:

-Afnan Mohammed AlFaidi, alfaidi.afnan@gmail.com 
-Lara Mubarak Alzannan, laradreamer79@gmail.com 

Holberton school by Tuwaiq academy 2025
