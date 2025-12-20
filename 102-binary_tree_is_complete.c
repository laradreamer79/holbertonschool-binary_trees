#include "binary_trees.h"
#include <stdlib.h>

/**
 * enqueue - Add node to queue
 * @head: Pointer to queue head
 * @tail: Pointer to queue tail
 * @node: Tree node to add
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
 * process_node - Process a node for completeness check
 * @node: Current tree node
 * @head: Queue head
 * @tail: Queue tail
 * @leaf: Pointer to leaf-only flag
 *
 * Return: 1 if valid, 0 otherwise
 */
static int process_node(const binary_tree_t *node,
			struct queue_s **head,
			struct queue_s **tail,
			int *leaf)
{
	if (node->left)
	{
		if (*leaf || !enqueue(head, tail, node->left))
			return (0);
	}
	else
		*leaf = 1;

	if (node->right)
	{
		if (*leaf || !enqueue(head, tail, node->right))
			return (0);
	}
	else
		*leaf = 1;

	return (1);
}

/**
 * binary_tree_is_complete - Checks if a binary tree is complete
 * @tree: Pointer to the root node
 *
 * Return: 1 if complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	struct queue_s *head = NULL, *tail = NULL, *tmp;
	const binary_tree_t *node;
	int leaf = 0;

	if (!tree || !enqueue(&head, &tail, tree))
		return (0);

	while (head)
	{
		tmp = head;
		node = head->node;
		head = head->next;
		if (!head)
			tail = NULL;
		free(tmp);

		if (!process_node(node, &head, &tail, &leaf))
			return (0);
	}

	return (1);
}

