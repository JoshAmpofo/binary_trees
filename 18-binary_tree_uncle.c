#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node
 *         if node is NULL, return NULL
 *         if node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandpt;

	if (node == NULL || node->parent == NULL ||
			node->parent->parent == NULL)
		return (NULL);

	grandpt = node->parent->parent;

	if (grandpt->left == node->parent)
		return (grandpt->right);
	else if (grandpt->right == node->parent)
		return (grandpt->left);
	else
		return (NULL);
}
