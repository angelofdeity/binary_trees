#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * Description: A leaf node is barren(got no kids)
 * @node: node to check
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
/**
 * binary_tree_nodes - counts the nodes with at
 * least 1 child in a binary tree
 * @tree: pointer to binary tree
 * Return: number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree)
	{
		left = binary_tree_nodes(tree->left);
		right = binary_tree_nodes(tree->right);
		if (tree->left || tree->right)
			return (1 + left + right);
	}
	return (0);
}
