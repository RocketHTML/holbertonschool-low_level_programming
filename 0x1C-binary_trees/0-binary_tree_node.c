#include "binary_trees.h"

/**
 * new_node - returns new tree node
 * @value: integer value of node
 * Return: pointer to new node with no parent or children
 */
binary_tree_t *new_node(int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = NULL;
	return (new);
}



/**
 * binary_tree_node - creates a new child node, left first, then right.
 * @parent: pointer to parent node
 * @value: value of node to create
 * Return: pointer to created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = new_node(value);
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	return (new);
}
