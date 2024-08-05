#include "binary_trees.h"

/**
 * binary_tree_insert_right - inster a right node
 * @parent: node actual
 * @value: value for n in node
 * Return: return node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

	new->n = value;

	if (new->n == '\0')
	{
		free(new);
		return (NULL);
	}

	new->left = NULL;
	new->right = parent->right;

	if (new->right != NULL)
		new->right->parent = new;

	parent->right = new;
	new->parent = parent;

	return (new);
}
