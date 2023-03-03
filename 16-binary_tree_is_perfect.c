#include "binary_trees.h"
#include <stdio.h>
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

		/*add 1 to left if it has left kid*/
		if (tree->left)
			left_height = 1 + binary_tree_height(tree->left);
		/*add 1 to right if it has right kid*/
		if (tree->right)
			right_height = 1 + binary_tree_height(tree->right);
		/*take max of both*/
		if (left_height >= right_height)
			return (left_height);
		else
			return (right_height);
	}
	return (0);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to binary tree
 * Return: size of tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
	}
	return (0);
}
/**
 * recursivePower - calculates the power of a given base
 * raised to a specified exponent
 * @base: The base of the power calculation
 * @exponent: The exponent
 * Return: Result of power calculation
 */
int recursivePower(int base, int exponent)
{
	if (exponent)
		return (base * recursivePower(base, exponent - 1));
	return (1);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * Description: A perfect tree is one where all nodes have 2 kids
 * and all leaves are at the same depth
 * @tree: pointer to tree node
 * Return: 1 if perfect, 0 Otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, size, perfectsize;

	if (tree)
	{
		height = 1 + binary_tree_height(tree);
		size = binary_tree_size(tree);
		perfectsize = recursivePower(2, height) - 1;
		if (size == perfectsize)
			return (1);
	}
	return (0);
}
