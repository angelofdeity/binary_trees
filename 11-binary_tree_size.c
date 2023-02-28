#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to binary tree
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_h = 0, right_h = 0;

		left_h = binary_tree_size(tree->left);
		right_h = binary_tree_size(tree->right);
		return (left_h + right_h + 1);
	}
	return (0);
}
