#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * max - Returns the maximum of two integers
 * @a: First integer
 * @b: Second integer
 *
 * Return: The larger of the two integers
 */
int max(int a, int b)
{
	if (a >= b)
	return (a);

	else
	return (b);
}

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: Pointer to the root node of the tree to measure the height
*
* Return: Height of the tree, 0 if tree is NULL
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	return (max(binary_tree_height(tree->left),
	binary_tree_height(tree->right)) + 1);

}
