#include "binary_trees.h"
/**
 * binary_tree_delete - deletes the entire tree
 * @tree: tree to be deleted
 * Return: Nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
	free(tree);
}
