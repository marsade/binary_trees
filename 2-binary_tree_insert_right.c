#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a new node at the right of the tree
 * @parent: parent of the new node
 * @value: value of the new node
 *
 * Return:  pointer to the created node or NULL on failure or if
 * parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_rnode;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	new_rnode = malloc(sizeof(binary_tree_t));

	if (new_rnode == NULL)
		return (NULL);

	new_rnode->n = value;
	new_rnode->parent = parent;
	new_rnode->right = NULL;
	new_rnode->left = NULL;
	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = new_rnode;
		new_rnode->right = temp;
		temp->parent = new_rnode;
	}
	else
	{
		parent->right = new_rnode;
		return (new_rnode);
	}
	return (new_rnode);
}
