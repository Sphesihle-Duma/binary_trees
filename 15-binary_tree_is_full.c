#include "binary_trees.h"
/**
 * binary_tree_is_full - checks if a tree is full or not
 * @tree: binary tree to check
 * Return: 1 if it is a full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_tree = 0, r_tree = 0;

	if (!tree)
		return (0);
	if (tree->left && tree->right)
	{
		l_tree = binary_tree_is_full(tree->left);
		r_tree = binary_tree_is_full(tree->right);
		if (l_tree == 0 || r_tree == 0)
			return (0);
		return (1);
	}
	else if (!tree->left && !tree->right)
		return (1);
	return (0);
}
