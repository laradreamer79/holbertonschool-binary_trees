#include "binary_trees.h"
#include <stdlib.h>

/**
 * enqueue - Adds a node to the queue
 * @head: Pointer to head of queue
 * @tail: Pointer to tail of queue
 * @node: Binary tree node to add
 */
void enqueue(queue_t **head, queue_t **tail,
		const binary_tree_t *node)
{
	queue_t *new;

	new = malloc(sizeof(queue_t));
	if (!new)
		return;

	new->node = node;
	new->next = NULL;

	if (*tail)
		(*tail)->next = new;
	else
		*head = new;

	*tail = new;
}

/**
 * dequeue - Removes a node from the queue
 * @head: Pointer to head of queue
 */
void dequeue(queue_t **head)
{
	queue_t *tmp;

	if (!head || !*head)
		return;

	tmp = *head;
	*head = (*head)->next;
	free(tmp);
}

/**
 * binary_tree_levelorder - Traverses a binary tree using level-order
 * @tree: Pointer to root node
 * @func: Function to apply to each node
 */
void binary_tree_levelorder(const binary_tree_t *tree,
		void (*func)(int))
{
	queue_t *head = NULL, *tail = NULL;
	const binary_tree_t *current;

	if (!tree || !func)
		return;

	enqueue(&head, &tail, tree);

	while (head)
	{
		current = head->node;
		func(current->n);
		dequeue(&head);

		if (current->left)
			enqueue(&head, &tail, current->left);
		if (current->right)
			enqueue(&head, &tail, current->right);
	}
}

