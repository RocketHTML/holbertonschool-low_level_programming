#include "binary_trees.h"

int pft(const binary_tree_t *tree)
{
	char status;
	int l;
	int r;

	if (tree == NULL)
		return (0);
	l = pft(tree->left);
	r = pft(tree->right);
	status = (l == r) && (l != -1) && (r != -1);
	if (status)
		return (r + 1);

	return (-1);
}

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (pft(tree) == -1)
		return (0);

	return (1);
}
