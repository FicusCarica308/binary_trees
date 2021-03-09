#include "binary_trees.h"
/**
* binary_tree_uncle - a function that finds the uncle of a node
* @node: node is a pointer to the node to find the uncle
* Return: returns the uncle of a node an NULL if none found
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *par; /*parent of given node*/
	binary_tree_t *grand; /*grandparent of given node*/

	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->parent == NULL)
		return (NULL);
	par = node->parent; /*128*/
	grand = node->parent->parent; /*98*/
	if (grand->left == par)
		return (grand->right);
	else if (grand->right == par)
		return (grand->left);
	return (NULL);
}
