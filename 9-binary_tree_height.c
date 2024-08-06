#include "binary_trees.h"

/**
* binary_tree_height - measures the height of a binary tree
* @tree: tree to measure the height
*
* Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	while (tree->left != NULL || tree->right != NULL)
	{
		if (tree->right != NULL)
		{
			tree = tree->right;
			count++;
		}

		if (tree->left != NULL)
		{
			tree = tree->left;
			count++;
		}
	}
	return (count);
}
