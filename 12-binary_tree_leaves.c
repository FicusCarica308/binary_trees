#include "binary_trees.h"
/**
* binary_tree_leaves - function that counts the leaves in a tree from a node
* @tree: tree is a pointer to the given node to find the leaves of
* Return: returns the amount of leaves attached to the node
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	binary_tree_t *left = NULL;
	binary_tree_t *right = NULL;

	if (tree == NULL)
		return (0);
	left = tree->left;
	right = tree->right;
	if (tree->right == NULL && tree->left == NULL)
		return (binary_tree_leaves(left) + 1 + binary_tree_leaves(right));
	else
		return (binary_tree_leaves(left) + 0 + binary_tree_leaves(right));
}
