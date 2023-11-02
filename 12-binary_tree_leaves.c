#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves.
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t t_leaves = 0;

	if (tree)
	{
		t_leaves += (!tree->left && !tree->right) ? 1 : 0;
		t_leaves += binary_tree_leaves(tree->left);
		t_leaves += binary_tree_leaves(tree->right);
	}
	return (t_leaves);
}
