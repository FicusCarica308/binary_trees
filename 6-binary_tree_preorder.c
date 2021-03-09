#include "binary_trees.h"
/**
* binary_tree_preorder - Pre-order traversal
* @tree: tree is a pointer to the root node
* @func: func is a pointer to a function to call for each node
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, &*func);
	binary_tree_preorder(tree->right, &*func);
}