#include "binary_trees.h"

/**
 * binary_tree_size - algorithm to count nodes in the tree
 * @tree: pointer to tree
 * Return: count of nodes in tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t c_left;
	size_t c_right;

	if (tree == NULL)
		return (0);

	c_left = binary_tree_size(tree->left);
	c_right = binary_tree_size(tree->right);
	return (c_left + c_right + 1);
}
