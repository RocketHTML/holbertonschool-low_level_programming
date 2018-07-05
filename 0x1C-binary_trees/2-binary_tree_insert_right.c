#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts to the right, replaces node that is there
 * @parent: pointer to parent
 * @value: value of new node
 * Return: pointer to new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = new_node(value);
	if (new == NULL)
		return (NULL);

	new->parent = parent;

	if (parent->right == NULL)
	{
		parent->right = new;
		return (new);
	}

	parent->right->parent = new;
	new->right = parent->right;
	parent->right = new;
	return (new);
}
