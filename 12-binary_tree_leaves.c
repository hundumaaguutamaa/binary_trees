#include "binary_trees.h"

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

