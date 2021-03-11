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
/**
 * binary_tree_height - finds height from node
 * @tree: given tree
 * Return: height;
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (-1);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height >= right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
/**
* binary_tree_size - measures the size of a binary tree from a given node
* @tree: tree is a pointer to the given node to find the size of
* Return: returns the size of the tree from the given node
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
/**
* binary_tree_is_perfect -  a function that checks if a binary tree is perfect
* @tree: tree is a pointer to the root node of tree
* Return: retruns 1 if true and 0 if false (for perfectness)
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height, size_right, size_left;

	if (tree == NULL)
		return (0);
	size_left = binary_tree_size(tree->left);
	size_right = binary_tree_size(tree->right);
	if (size_left != size_right)
		return (0);
	if (binary_tree_is_full(tree) != 1)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height != right_height)
		return (0);
	return (1);
}
