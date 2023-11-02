#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves.
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;
if (tree) {
    if (tree->left == NULL && tree->right == NULL) {
        leaves += 1;
    }
    
    if (tree->left != NULL) {
        leaves += binary_tree_leaves(tree->left);
    }

    if (tree->right != NULL) {
        leaves += binary_tree_leaves(tree->right);
    }
   return (leaves);
}

