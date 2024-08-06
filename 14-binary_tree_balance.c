#include "binary_trees.h"
/**
 *
 */

int count(const binary_tree_t *tree)
{
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (count(tree->left) + count(tree->right));
}

/**
 *
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int i;
	int j;

	if (tree == NULL)
		return (0);

	i = count(tree->left);
	j = count(tree->right);

	return (i - j);
}
