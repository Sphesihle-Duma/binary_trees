#include "binary_trees.h"
/**
 * is_tree_perfect - Checks if a tree is perfect or not
 * @tree: binary tree to check
 * Return: 0 if is not a perfect or other number that is the level of height
 */
int is_tree_perfect(const binary_tree_t *tree)
{
	int l_tree = 0, r_tree = 0;

	if (tree->left && tree->right)
	{
		l_tree = 1 + is_tree_perfect(tree->left);
		r_tree = 1 + is_tree_perfect(tree->right);
		if (l_tree == r_tree && r_tree != 0 && l_tree != 0)
			return (r_tree);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	return (0);
}
/**
 * binary_tree_is_perfect - determines whether the tree is perfect or not
 * @tree: binary tree to check
 * Return: 1 if it is otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int final = 0;

	if (!tree)
		return (0);
	final = is_tree_perfect(tree);
	if (final != 0)
		return (1);
	return (0);
}
