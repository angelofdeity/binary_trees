#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_h, right_h;
		if (tree->left)
			left_h = 1 + binary_tree_size(tree->left);
		if (tree->right)
			right_h = 1 + binary_tree_size(tree->right);
		return (left_h + right_h)
	}
	return (0);
}
