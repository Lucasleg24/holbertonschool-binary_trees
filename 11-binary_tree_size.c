#include "binary_trees.h"

/**
* binary_tree_size - measures the size of a binary tree
* @tree: pointer to the root node of the tree to measure the size
*
* Return: the size of the tree, or 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, lsize = 0, rsize = 0;

	if (tree == NULL)
		return (0);

	lsize = binary_tree_size(tree->left);
	rsize = binary_tree_size(tree->right);

	size = 1 + lsize + rsize;
	return (size);
}
