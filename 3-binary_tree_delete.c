#include "binary_trees.h"

/**
 * binary_tree_delete - delete the entire binary tree
 * @tree: pointer to root node of tree to delete
 *
 * Return: void or nothing is tree is NULL
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);

		free(tree);
	}
}
