#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: binary tree
 * Return: size of a binary tree.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0;
	size_t right_size = 0;
	size_t final_size = 0;

	if (!tree)
		return (0);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);
	final_size = left_size + right_size + 1;
	return (final_size);
}

