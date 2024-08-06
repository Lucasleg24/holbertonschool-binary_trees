#include "binary_trees.h"
/**
 * count - count the value of left and right
 * @tree: tree binary
 * Return: return value count
 */

int count(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (count(tree->left) + count(tree->right));
}

/**
 * binary_tree_balance - balance the value
 * @tree: tree binary
 * Return: return the value
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
