#include "binary_trees.h"
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
			left = 1 + binary_tree_balance(tree->left);
		if (tree->right)
			right = 1 + binary_tree_balance(tree->right);
		return (left - right);
	}
	return (0);
}
