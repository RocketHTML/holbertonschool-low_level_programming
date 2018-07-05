#include "binary_trees.h"

/**
 * climb_up - climbs up to the root, and then back down to entry node
 * @tree: entry node for the algorithm
 * @depth: counter keeping track of nodes climbed upon
 * Return: depth of the entry node
 */
size_t climb_up(const binary_tree_t *tree, size_t depth)
{
	if (tree->parent == NULL)
		return (depth);

	return (climb_up(tree->parent, depth + 1));
}

/**
 * binary_tree_depth - returns depth of chosen node
 * @tree: node to calculate the depth of
 * Return: depth of node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (climb_up(tree, 0));
}
