#include "binary_trees.h"

/**
 * binary_tree_balance - returns the balance factor of the tree
 * @tree: pointer to the tree to measure
 * Return: balance factor, which is left height minus right height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
