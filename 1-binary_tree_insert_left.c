#include "binary_trees.h"


/**
 * binary_tree_insert_left - inserts left child
 * @parent: pointer to the node to insert the left child.
 * @value: value to be stored in the left child.
 * Return: pointer to the left child or NULL on failure.
 * 
 */


binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    if (parent == NULL)
        return NULL;

    binary_tree_t *new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return NULL;

    new_node->value = value;
    new_node->parent = parent;
    new_node->left = parent->left;
    new_node->right = NULL;

    if (new_node->left != NULL)
        new_node->left->parent = new_node;

    parent->left = new_node;

    return new_node;
}
