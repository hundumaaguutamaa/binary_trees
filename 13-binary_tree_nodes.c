#include "binary_trees.h"

/**
 * binary_tree_nodes - Count nodes with child. 
 * @tree: Pointer to the root node of the tree.
 *
 * Return: Number of leaves or 0 if NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);

	return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));

}

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right || node->left)
		return (0);
        
	return (1);
}
