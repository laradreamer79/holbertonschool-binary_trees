#include "binary_trees.h"

/**
 * binary_tree_rotate_right - Performs a right-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node after rotation,
 * or the original tree if rotation is not possible
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root, *parent;

	if (!tree || !tree->left)
		return (tree);

	new_root = tree->left;
	parent = tree->parent;

	tree->left = new_root->right;
	if (new_root->right)
		new_root->right->parent = tree;

	new_root->right = tree;
	tree->parent = new_root;

	new_root->parent = parent;

	if (parent)
	{
		if (parent->left == tree)
			parent->left = new_root;
		else
			parent->right = new_root;
	}

	return (new_root);
}

