#include "binary_trees.h"

/**
 * tree_size - Counts number of nodes in a binary tree
 * @tree: Pointer to root
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
 * is_complete - Checks if tree is complete using index method
 * @tree: Pointer to current node
 * @index: Index of node
 * @size: Total number of nodes
 *
 * Return: 1 if complete, 0 otherwise
 */
static int is_complete(const binary_tree_t *tree,
		size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (is_complete(tree->left,
			2 * index + 1, size) &&
		is_complete(tree->right,
			2 * index + 2, size));
}

/**
 * is_heap_order - Checks heap order property
 * @tree: Pointer to root
 *
 * Return: 1 if valid heap, 0 otherwise
 */
static int is_heap_order(const binary_tree_t *tree)
{
	if (!tree)
		return (1);

	if (tree->left && tree->n < tree->left->n)
		return (0);

	if (tree->right && tree->n < tree->right->n)
		return (0);

	return (is_heap_order(tree->left) &&
		is_heap_order(tree->right));
}

/**
 * binary_tree_is_heap - Checks if a binary tree is a max binary heap
 * @tree: Pointer to root node
 *
 * Return: 1 if heap, 0 otherwise
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);

	size = tree_size(tree);

	if (!is_complete(tree, 0, size))
		return (0);

	return (is_heap_order(tree));
}

