#include "binary_trees.h"

/**
 *
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
		return (NULL);

#include "binary_trees.h"

/**
 * binary_tree_node - function for create node
 * @parent: pointer to parent node
 * @value: value of n in node
 * Return: return a struct type
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

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
	new->right = NULL;
	new->parent = parent;

	return (new);
}
