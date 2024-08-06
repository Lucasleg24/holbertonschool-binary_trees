#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaf
 * @tree: value of node
 * Return: return count
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		count++;
	if (tree->right != NULL)
		count++;
	if (tree->left == NULL && tree->right == NULL)
		count = 1;

	return (count);
}
