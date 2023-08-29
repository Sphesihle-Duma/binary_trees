#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node: node to be checked
 * Return: 1 if is a leaf otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node)
	{
		if (!(node->left) && !(node->right))
			return (1);
	}
	return (0);
}
