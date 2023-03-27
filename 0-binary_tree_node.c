#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree
 * @parent: pointer to parent node
 * @value: data for new node
 *
 * Return: pointer to new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *binary_new_node = malloc(sizeof(binary_tree_t));

	if (binary_new_node == NULL)
		return (NULL);

	binary_new_node->n = value;
	binary_new_node->parent = parent;
	binary_new_node->left = NULL;
	binary_new_node->right = NULL;

	return (binary_new_node);
}
