#include "binary_trees.h"
#include <stdlib.h>

/**
 * enqueue - Add a node to the queue
 * @head: Pointer to queue head
 * @tail: Pointer to queue tail
 * @node: Tree node to enqueue
 *
 * Return: 1 on success, 0 on failure
 */
static int enqueue(struct queue_s **head,
		   struct queue_s **tail,
		   const binary_tree_t *node)
{
	struct queue_s *new = malloc(sizeof(struct queue_s));

	if (!new)
		return (0);

	new->node = node;
	new->next = NULL;

	if (*tail)
		(*tail)->next = new;
	else
		*head = new;

	*tail = new;
	return (1);
}

/**
 * binary_tree_levelorder - Traverse a binary tree using level-order traversal
 * @tree: Pointer to the root node of the tree
 * @func: Function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	struct queue_s *head = NULL, *tail = NULL, *tmp;
	const binary_tree_t *node;

	if (!tree || !func)
		return;

	if (!enqueue(&head, &tail, tree))
		return;

	while (head)
	{
		tmp = head;
		node = head->node;
		head = head->next;
		if (!head)
			tail = NULL;
		free(tmp);

		func(node->n);

		if (node->left)
			enqueue(&head, &tail, node->left);
		if (node->right)
			enqueue(&head, &tail, node->right);
	}
}

