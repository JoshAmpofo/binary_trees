#include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes with at least 1 child in BT
 * @tree: pointer to the root node of the tree to count no of nodes
 *
 * Return: number of nodes. 0 if tree is NULL
 *         NULL pointer is not a node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right) + 1);
	return (0);
}
