#include "binary_trees.h"
#include <limits.h>

/**
 * is_bst_range - Checks if a binary tree is a valid BST using ranges
 * @tree: Pointer to current node
 * @min: Minimum allowed value (exclusive)
 * @max: Maximum allowed value (exclusive)
 *
 * Return: 1 if valid, 0 otherwise
 */
static int is_bst_range(const binary_tree_t *tree, long min, long max)
{
	if (!tree)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (is_bst_range(tree->left, min, tree->n) &&
		is_bst_range(tree->right, tree->n, max));
}

/**
 * avl_height_ok - Checks AVL balance and returns height via pointer
 * @tree: Pointer to current node
 * @height: Output height of current subtree
 *
 * Return: 1 if balanced, 0 otherwise
 */
static int avl_height_ok(const binary_tree_t *tree, int *height)
{
	int hl, hr;

	if (!tree)
	{
		*height = 0;
		return (1);
	}

	if (!avl_height_ok(tree->left, &hl))
		return (0);

	if (!avl_height_ok(tree->right, &hr))
		return (0);

	if (hl - hr > 1 || hr - hl > 1)
		return (0);

	*height = (hl > hr ? hl : hr) + 1;
	return (1);
}

/**
 * binary_tree_is_avl - Checks if a binary tree is a valid AVL tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if AVL, 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int height;

	if (!tree)
		return (0);

	if (!is_bst_range(tree, LONG_MIN, LONG_MAX))
		return (0);

	return (avl_height_ok(tree, &height));
}

