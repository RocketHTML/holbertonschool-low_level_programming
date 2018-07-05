#include "binary_trees.h"

/**
 * binary_tree_nodes - returns the number of internal nodes
 * @tree: pointer to the tree to count nodes from
 * Return: number of internal nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else
		return (0);
}
