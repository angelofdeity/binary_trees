#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to tree node
 * Return: pointer to sibling node if found, else NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node)
	{
		if (node->parent)
		{
			if (node->parent->left == node)
				return (node->parent->right);
			return (node->parent->left);
		}
	}
	return (NULL);
}
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to tree node
 * Return: pointer to uncle node if found, else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node)
		return (binary_tree_sibling(node->parent));
	return (NULL);
}
