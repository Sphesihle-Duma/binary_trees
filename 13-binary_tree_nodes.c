#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the number of nodes
 * @tree: binary tree
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_of_nodes = 0;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
		num_of_nodes = 1;
	num_of_nodes += binary_tree_nodes(tree->left);
	num_of_nodes += binary_tree_nodes(tree->right);
	return (num_of_nodes);
}
