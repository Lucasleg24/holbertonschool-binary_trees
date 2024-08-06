#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: tree to measure the height
*
* Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	lheight = binary_tree_height(tree->left) + 1;
	rheight = binary_tree_height(tree->right) + 1;

	if (lheight < rheight)
		return (rheight);
	else
		return (lheight);
}
