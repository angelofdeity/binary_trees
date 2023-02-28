#include "binary_trees.h"
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
		if (!tree->left && !tree->right)
			return (1);
		flag = binary_tree_is_full(tree->left);
		flag *= binary_tree_is_full(tree->right);
	}
	return (flag);
}
/*
 * alternate solution(shorter code)
 *int binary_tree_is_full(const binary_tree_t *tree)
 *{
 *	if (tree)
 *	{
 *		if (!tree->left && !tree->right)
 *			return (1);
 *		else
 *			return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->
			right));
 *	}
 *	return (0);
 *}
 */
