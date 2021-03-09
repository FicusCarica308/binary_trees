#include "binary_trees.h"
/**
 * binary_tree_nodes - Entry point
 * @tree: given tree
 * Return: Number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
	else
		return (binary_tree_nodes(tree->left) + 0 + binary_tree_nodes(tree->right));
}
