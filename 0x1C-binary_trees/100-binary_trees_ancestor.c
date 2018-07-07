#include "binary_trees.h"

/**
 * check - checks a node against another node's history
 * @node: node to check
 * @leaf: node who's history we must check
 * Return: pointer to found ancestor, or NULL if none found
 */
const binary_tree_t *check(const binary_tree_t *node,
			   const binary_tree_t *leaf)
{
	if (node == NULL || leaf == NULL)
		return (NULL);

	if (node != leaf)
		return (check(node, leaf->parent));
	else
		return (node);
}

/**
 * binary_trees_ancestor - find lowest common ancestor of two nodes
 * @first: pointer to first node
 * @second: pointer to second node
 * Return: pointer to ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	binary_tree_t *res;

	if (first == NULL)
		return (NULL);

	res = (binary_tree_t *)check(first, second);
	if (res == NULL)
		return (binary_trees_ancestor(first->parent, second));
	else
		return (res);
}
