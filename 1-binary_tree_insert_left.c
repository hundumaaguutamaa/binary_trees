#include "binary_trees.h"


/**
 * binary_tree_insert_left - inserts left child
 * @parent: pointer to the node to insert the left child.
 * @value: value to be stored in the left child.
 * 
 * Return: pointer to the left child or NULL on failure.
 * 
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_chld;

	if (parent == NULL)
		return (NULL);

	left_chld = malloc(sizeof(binary_tree_t));

	if (left_chld == NULL)
		return (NULL);

	left_chld->parent = parent;
	left_chld->n = value;
	left_chld->right = NULL;
	parent->left = left_chld;

	if (left_chld->left)
	{
		left_chld->left->parent = left_chld;
	}

	return (left_chld);
}
