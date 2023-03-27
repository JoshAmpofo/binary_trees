#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right-child of another node
 * @parent: pointer to node to insert right-child in
 * @value: value to insert into new node
 *
 * Return: pointer to created node, NULL on failure or if parent is NULL
 *
 * Description: if parent already has right-child, new node must take place
 *              old right-child must be set as right-child of new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
