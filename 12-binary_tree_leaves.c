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
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to binary tree
 * Return: number of leaves
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree)
	{
		if (tree->left)
			left = binary_tree_leaves(tree->left);
		if (tree->right)
			right = binary_tree_leaves(tree->right);
		if (binary_tree_is_leaf(tree))
			return (1 + left + right);
	}
	return (left + right);
}

/*
 * A bit shorter code that does same thing
 *size_t binary_tree_leaves(const binary_tree_t *tree)
 *{
 *	size_t left = 0, right = 0;
 *
 *	if (tree)
 *	{
 *		left = binary_tree_leaves(tree->left);
 *		right = binary_tree_leaves(tree->right);
 *
 *	}
 *	return (binary_tree_is_leaf(tree) + left + right);
 *}
 */
