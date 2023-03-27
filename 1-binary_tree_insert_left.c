#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left-child of another node
 * @parent: pointer to parent node
 * @value: value to insert into new node
 *
 * Return: pointer to created node, NULL on failure or if parent is NULL
 *
 * Description: if parent already has left-child, new node must take place
 *              old left-chuld must be set as left-child of new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
