#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: is a pointer to the root node of the tree to check
 * Return: if tree is NULL 0, otherwise
**/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return ((!tree->right && !tree->left) ? 1 :
			binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
