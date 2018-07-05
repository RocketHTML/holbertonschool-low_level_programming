#include "binary_trees.h"

/**
 * _is_full - checks if tree is a full binary tree
 * @tree: pointer to tree to check
 * Return: 1 if it's full, 0 otherwise
 */
int _is_full(const binary_tree_t *tree)
{
	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (1);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (binary_tree_is_full(tree->left) * binary_tree_is_full(tree->right));
}

/**
 * binary_tree_is_full - checks if tree is a full binary tree
 * @tree: pointer to tree to check
 * Return: 1 if it's full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (_is_full(tree));
}
