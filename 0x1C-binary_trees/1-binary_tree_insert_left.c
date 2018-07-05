#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts to left of parent, returns NULL on failure
 * @parent: pointer to parent to append to
 * @value: value for new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	if (parent->left == NULL)
		return (binary_tree_node(parent, value));

	new = new_node(value);
	if (new == NULL)
		return (NULL);
	parent->left->parent = new;
	new->left = parent->left;
	parent->left = new;
	new->parent = parent;
	return (new);
}
