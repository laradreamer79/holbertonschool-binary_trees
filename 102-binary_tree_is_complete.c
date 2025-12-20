#include "binary_trees.h"

/**
 * tree_size - Counts the number of nodes in a binary tree
 * @tree: Pointer to the root node
 *
 * Return: Number of nodes
 */
static size_t tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + tree_size(tree->left) + tree_size(tree->right));
}
/**
 * is_complete_index - Checks completeness using array indexing
 * @tree: Pointer to the current node
 * @index: Index of the node in array representation
 * @size: Total number of nodes in the tree
 *
 * Return: 1 if complete, 0 otherwise
 */
static int is_complete_index(const binary_tree_t *tree,
		size_t index, size_t size)
{
	int left_ok;
	int right_ok;

	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	left_ok = is_complete_index(tree->left,
			2 * index + 1, size);
	right_ok = is_complete_index(tree->right,
			2 * index + 2, size);

	return (left_ok && right_ok);
}
/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = tree_size(tree);
	return (is_complete_index(tree, 0, size));
}

