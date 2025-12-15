#include "binary_trees.h"

/**
* binary_tree_sibling - Finds the sibling of a node
* @node: Pointer to the node to find the sibling of
*
* Return: Pointer to the sibling node, or NULL if no sibling exists
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
binary_tree_t *parent;

if (node == NULL)
return (NULL);

parent = node->parent;

if (parent == NULL)
return (NULL);

/* Check if node is left child and return right sibling */
if (parent->left == node && parent->right != NULL)
return (parent->right);

/* Check if node is right child and return left sibling */
if (parent->right == node && parent->left != NULL)
return (parent->left);

return (NULL);
}
