#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *tmp;


	if (parent == NULL)
	return (NULL);

	new = malloc(sizeof(binary_tree_t));

	if (new == NULL)
	return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;

	if (parent->left != NULL)
	{
		parent->left = tmp;
		tmp = new->left;
		new = parent->left;

		return (new);
	}

}
