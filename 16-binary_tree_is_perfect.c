#include "binary_trees.h"

/**
 *
 */

int is_perfect(const binary_tree_t *tree, size_t i, int level)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	
}

/**
 *
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t i;
	if (tree == NULL)
		return (0);

	i = binary_tree_height(tree);

	is_perfect(tree, i, 0);
