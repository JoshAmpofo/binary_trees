#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse through a BT using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function call for each node
 *        value in node must be passed as parameter to this function
 *
 * Return: void. Do nothing if func or tree is NUll
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
