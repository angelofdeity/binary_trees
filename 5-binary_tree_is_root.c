#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is root
 * Description: A root node is the first parent
 * as it gave birth to all kids
 * @node: node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
