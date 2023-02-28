#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a node
 * in a binary tree
 * Description: The height of a node is the number
 * of edges present in the longest path
 * connecting that node to a leaf node.
 * @tree: pointer to binary tree
 * Return: height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_height = 0, right_height = 0;

		if (tree->left)
			left_height = 1 + binary_tree_height(tree->left);
		if (tree->right)
			right_height = 1 + binary_tree_height(tree->right);
		if (left_height >= right_height)
			return (left_height);
		else
			return (right_height);
	}
	return (0);
}

/**
 * binary_tree_balance - computes the balance factor
 * of a binary tree
 * Description: Balance factor is the height of the left
 * subtree minus the height of the right subtree
 * @tree: pointer to binary tree
 * Return: Balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree)
	{
		if (tree->left)
			left = 1 + binary_tree_height(tree->left);
		if (tree->right)
			right = 1 + binary_tree_height(tree->right);
	}
	return (left - right);
}
