#include "binary_trees.h"
/**
 * binary_tree_is_root - checks whether a node is a root
 * @node: the node to be checked
 * Return: 1 if node is a root, 0 otherwise
 * if node is NULL, 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	return (0);
}
