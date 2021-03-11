#include "binary_trees.h"
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
 * binary_tree_balance - Gets the balance value of the tree
 * @tree: given tree node
 * Return: balance of tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = binary_tree_height(tree->left);
	int right = binary_tree_height(tree->right);

	if (tree == NULL)
		return (0);
	return (left - right);
}
