#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent of the left child node
 * @value: value of the left child node
 *
 * Return: a pointer to the created node or NULL on failure or if
 * parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_lnode = malloc(sizeof(binary_tree_t));
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);

	if (new_lnode == NULL)
		return (NULL);

	new_lnode->n = value;
	new_lnode->parent = parent;
	new_lnode->right = NULL;
	new_lnode->left = NULL;
	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = new_lnode;
		new_lnode->left = temp;
		temp->parent = new_lnode;
	}
	else
	{
		parent->left = new_lnode;
		return (new_lnode);
	}
	return (new_lnode);
}
