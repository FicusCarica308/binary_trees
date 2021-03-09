#include "binary_trees.h"
/**
* binary_tree_sibling - a function that finds the sibling of a node
* @node: tree is a pointer to the given node
* Return: returns the sibling of the node
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
        binary_tree_t *par; /*parent of given node*/

        if (node == NULL || node->parent == NULL)
        	return (NULL);
        par = node->parent;
        if (par->left == node)
        	return (par->right);
        else if (par->right == node)
        	return (par->left);
	return (NULL);
}
