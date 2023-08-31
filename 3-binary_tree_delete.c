#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: is a pointer to the root node of the tree to delete
**/

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
