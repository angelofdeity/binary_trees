#include "binary_trees.h"
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	node->parent = parent;
	parent->right = node;
	return (node);
}
