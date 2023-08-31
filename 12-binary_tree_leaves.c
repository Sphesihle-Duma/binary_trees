#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the number of leaves
 * @tree: binary tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_tree = 0;
	size_t right_tree = 0;
	size_t num_of_leaves = 0;
	size_t leaf = 0;

	if (!tree)
		return (0);
	left_tree = binary_tree_leaves(tree->left);
	right_tree = binary_tree_leaves(tree->right);
	leaf = left_tree + right_tree;
	if (!left_tree && !right_tree)
		num_of_leaves = leaf + 1;
	else
		num_of_leaves = leaf;
	return (num_of_leaves);
}
