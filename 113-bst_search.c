#include "binary_trees.h"   
   
/**
 * bst_search - Searches for a value in a binary search tree.
 * @tree: Pointer to the root node of the BST.
 * @value: Value to search for in the BST.
 *
 * Return: If the tree is NULL or value is not found, NULL else pointer to the node containing the value.
 */
bst_t *bst_search(const bst_t *tree, int value)


	if (tree != NULL)
    
   		 if (tree->n == value)
		{
        		return ((bst_t *)tree);
		}

   		 if (value < tree->n) 
  		 {
       			 return bst_search(tree->left, value); 
   		 } 
   		 else 
   		 {
       			 return bst_search(tree->right, value); 
   		 }
}
