#include "binary_trees.h"
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);

	node->n = value;
	if (parent->left != NULL)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	node->parent = parent;
	parent->left = node;
	return (node);
}
