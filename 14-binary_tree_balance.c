#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: A pointer to the root node of the tree to measure the height
 * Return: If tree is NULL 0, otherwise height of the node
**/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0, r = 0;

	if (!tree)
		return (0);

	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);

	return ((l > r ? l : r) + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: is a poin to the root node of the tree to measure the balance factor
 * Return: if tree is NULL 0, otherwise
**/

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
