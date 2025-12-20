#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Performs a left-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to rotate
 *
 * Return: Pointer to the new root node after rotation, or NULL if tree is NULL
 * or if tree has no right child
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root, *parent;

	if (!tree || !tree->right)
		return (tree);

	new_root = tree->right;
	parent = tree->parent;

	tree->right = new_root->left;
	if (new_root->left)
		new_root->left->parent = tree;

	new_root->left = tree;
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

