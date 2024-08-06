#include "binary_trees.h"

/**
* binary_tree_is_full - checks if a binary tree is full
* @tree: pointer to the root node of the tree to check
*
* Return: 1 if the binary tree is full, 0 if it isn't
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int state = 0;

	if (tree == NULL)
		return(0);

	binary_tree_is_full(tree->left);
	binary_tree_is_full(tree->right);

	if ((tree->left == NULL && tree->right == NULL) || (tree->left != NULL && tree->right != NULL))
		state++;

	else 
		state--;

	return (state);
}
