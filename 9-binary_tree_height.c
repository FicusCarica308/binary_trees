#include "binary_trees.h"
/**
 * left_and_right - loops through tree recursively left and right
 * @tree: given tree
 * Return: returns total height of tree
 */
size_t left_and_right(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);
	left_height = left_and_right(tree->left) + 1;
	right_height = left_and_right(tree->right) + 1;
	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}
/**
 * binary_tree_height - finds height from node
 * @tree: given tree
 * Return: height;
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (left_and_right(tree) - 1);
}
