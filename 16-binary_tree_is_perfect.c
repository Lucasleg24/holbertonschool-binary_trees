#include "binary_trees.h"

/**
 * depth - Calcul the depth of the node
 * @node: Pointer to the node
 * Return: The depth of the node
 * Description: We need to know the max depth of the tree from the given node
 */
int depth(const binary_tree_t *node)
{
	int i = 0;

	while (node != NULL)
	{
	i++;
	node = node->left;
	}
	return (i);
}


/**
 * is_perfect - check is perfect or no for return result
 * @tree: root of tree
 * @i: size of tree
 * @level: check size of i
 * Return: return the result
 */

int is_perfect(const binary_tree_t *tree, int i, int level)
{
	if (tree == NULL)
		return (1);

	if (tree->left == NULL && tree->right == NULL)
		return (i == level + 1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect(tree->left, i, level + 1) &&
		is_perfect(tree->right, i, level + 1));
}

/**
 * binary_tree_is_perfect - check is perfect
 * @tree: root of tree
 * Return: value of check
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int i;

	if (tree == NULL)
		return (0);

	i = depth(tree);

	return (is_perfect(tree, i, 0));
}
