#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: is a pointer to the root node of the tree to count the num of leaves
 * Return: if tree is NULL 0, otherwise number of leaves
**/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (((!tree->left && !tree->right) ? 1 : 0) +
			binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
