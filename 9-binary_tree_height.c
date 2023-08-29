#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: binary tree a height must be calculated from
 * Return: height;
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (!tree)
		return (0);
	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	else
		left_height = 0;
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);
	else
		right_height = 0;
	if (left_height > right_height)
		return (left_height);
	return (right_height);
}
