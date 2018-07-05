#include "binary_trees.h"

/**
 * binary_tree_balance - returns the balance factor of the tree
 * @tree: pointer to the tree to measure
 * Return: balance factor, which is left height minus right height
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h;
	int right_h;

	if (tree == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (binary_tree_is_leaf(tree->left) == 1)
		left_h = 1;
	if (binary_tree_is_leaf(tree->right) == 1)
		right_h = 1;
	return (left_h - right_h);
}
