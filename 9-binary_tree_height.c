#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: binary tree a height must be calculated from
 * Return: height;
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;
	size_t left_height;
	size_t right_height;

	if(!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		height = left_height + 1;
	else
		height = right_height + 1;
	return height;
}
