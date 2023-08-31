#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: is a pointer to the root node of the tree to measure the size
 * Return: if tree is NULL 0
**/

size_t binary_tree_size(const binary_tree_t *tree)
{
	return ((!tree) ? 0 :
			(binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1));
}
