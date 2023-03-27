#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse through a BT in post-order traversal method
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to call for each node.
 *        value in the node must be passed as a param to this func
 *
 * Return: void. Nothing if tree or func is NULL
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
