#include "binary_trees.h"

/**
 * height_of_binary_tree - Measures height of a binary tree for a bal tree
 * @tree: binary tree
 * Return: the height
 */

size_t height_of_binary_tree(const binary_tree_t *tree)
{
	size_t right_tree = 0;
	size_t left_tree = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_tree = 1 + height_of_binary_tree(tree->left);
	else
		left_tree = 1;
	if (tree->right)
		right_tree = 1 + height_of_binary_tree(tree->right);
	else
		right_tree = 1;
	if (left_tree > right_tree)
		return (left_tree);
	else
		return (right_tree);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: binary tree
 * Return: balanced factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right_tree = 0, left_tree = 0, final = 0;

	if (tree)
	{
		left_tree = ((int)height_of_binary_tree(tree->left));
		right_tree = ((int)height_of_binary_tree(tree->right));
		final = left_tree - right_tree;
	}
	return (final);
}
