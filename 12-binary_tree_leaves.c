#include "binary_trees.h"
/**
* binary_tree_leaves - function that counts the leaves in a tree from a node
* @tree: tree is a pointer to the given node to find the leaves of
* Return: returns the amount of leaves attached to the node
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (binary_tree_leaves(tree->left) + 1 + binary_tree_leaves(tree->right));
	else
		return (binary_tree_leaves(tree->left) + 0 + binary_tree_leaves(tree->right));
}