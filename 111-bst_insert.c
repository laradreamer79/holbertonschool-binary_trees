#include "binary_trees.h"
#include <stdlib.h>

/**
* bst_insert_recursive - Recursive helper function for BST insertion
* @tree: Pointer to current node pointer
* @parent: Parent node
* @value: Value to insert
*
* Return: Pointer to the created node, or NULL
*/
bst_t *bst_insert_recursive(bst_t **tree, bst_t *parent, int value)
{
if (!*tree)
{
*tree = binary_tree_node(parent, value);
return (*tree);
}

if (value == (*tree)->n)
return (NULL);

if (value < (*tree)->n)
return (bst_insert_recursive(&(*tree)->left, *tree, value));

return (bst_insert_recursive(&(*tree)->right, *tree, value));
}

/**
* bst_insert - Inserts a value in a Binary Search Tree
* @tree: Double pointer to the root node of the BST
* @value: Value to store in the node to be inserted
*
* Return: Pointer to the created node, or NULL on failure
*/
bst_t *bst_insert(bst_t **tree, int value)
{
if (!tree)
return (NULL);

return (bst_insert_recursive(tree, NULL, value));
}
