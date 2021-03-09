#include "binary_trees.h"
/**
* binary_tree_inorder - traverses binary tree in-order
* @tree: pointer to root of binary tree
* @func: function pointer to func to be used on each node
*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	binary_tree_inorder(tree->left, &*func);
	func(tree->n);
	binary_tree_inorder(tree->right, &*func);
}
