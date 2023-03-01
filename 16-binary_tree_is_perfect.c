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
		/*balance factor = left_height - right_height*/
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
	}
	return (left - right);
}
/**
 * binary_tree_is_full - checks if a tree is full
 * Description: Its full if there aren't any null
 * left or right kids
 * @tree: pointer to binary tree
 * Return: 1 if full, 0 Otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int flag = 0;

	if (tree)
	{
		/*
		 *This code checks each node to ensure that all nodes have either
		 *0 or 2 kids
		 *if a node has only one kid, 0 is returned by the kid signifying
		 *it isn't full
		 *if the other kid returns 1, flag multiplies both values and
		 *therefore returns 0, signifying
		 *It has neither 0 nor 2 kids
		 */
		if (!tree->left && !tree->right)
			return (1);
		flag = binary_tree_is_full(tree->left);
		flag *= binary_tree_is_full(tree->right);
	}
	return (flag);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to tree node
 * Return: 1 if perfect, 0 Otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/*
	 *As far as I have observed, a perfect tree has a
	 *false balance factor(0) and is full
	 *so if balance factor returns a positive or negative
	 *number, those a true balance factors
	 */
	return (!binary_tree_balance(tree) && binary_tree_is_full(tree));
}
