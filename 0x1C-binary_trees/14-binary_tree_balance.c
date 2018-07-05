#include "binary_trees.h"

/**
 * binary_tree_height - returns height of tree
 * @tree: pointer to tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l;
	size_t r;

	if (tree == NULL)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l > r)
		return (l + 1);
	else
		return (r + 1);
}

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
