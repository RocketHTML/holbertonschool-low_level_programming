#include "binary_trees.h"

/**
 * height_finder - finds the height recursively
 * @tree: pointer to tree to measure
 * @depth: current depth in the recursive traversal
 * @height: max height seen so far
 * Return: unsigned integer max height seen
 */
size_t height_finder(const binary_tree_t *tree, size_t depth, size_t height)
{
	size_t h_left;
	size_t h_right;

	if (tree == NULL)
		return (depth - 1);

	h_left = height_finder(tree->left, depth + 1, height);
	h_right = height_finder(tree->right, depth + 1, height);

	if (h_left > h_right)
		height = h_left;
	else
		height = h_right;

	return (height);
}

/**
 * binary_tree_height - returns height of tree
 * @tree: pointer to tree to measure
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (height_finder(tree, 0, 0));
}
