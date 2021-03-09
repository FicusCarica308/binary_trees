#include "binary_trees.h"
/**
 * binary_tree_is_full - checks to see if tree is full
 * @tree: given tree node
 * Return: 1 for full 0 for not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{

	binary_tree_t *left = NULL;
	binary_tree_t *right = NULL;

	if (tree == NULL)
		return (0);
	left = tree->left;
	right = tree->right;
	if ((right == NULL && left != NULL) || (right != NULL && left == NULL))
		return (0);
	if ((tree->left) && (tree->right))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (1);
}
