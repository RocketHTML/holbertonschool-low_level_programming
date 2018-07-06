#include "binary_trees.h"

/**
 * binary_tree_sibling - returns sibling of node
 * @node: node to return sibling of
 * Return: sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *l;
	binary_tree_t *r;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	l = node->parent->left;
	r = node->parent->right;

	if (l == node)
		return (r);
	else
		return (l);
}
