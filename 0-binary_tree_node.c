#include "binary_trees.h"
/**
 * binary_tree_node - Adds nodes to tree
 * @parent: parent of input nodes
 * @value:value attached to nodes
 * Return: new node being added
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	return (new_node);
}
