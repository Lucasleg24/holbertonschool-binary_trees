#include "binary_trees.h"

/**
 * binary_tree_postorder - print all node post
 * @tree: root of node
 * @func: function for print node value
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
