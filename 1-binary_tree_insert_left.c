#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as left-child
 * @parent: parent node to insert a node as left-child in
 * @value: value stored in new node
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = binary_tree_node(parent, value);
	if (!new_node || !parent)
		return (NULL);
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;
	return (new_node);
}
