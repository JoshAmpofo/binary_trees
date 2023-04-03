#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate a BT to the left
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to new root node of the tree rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *hlp, *temp;

	if (tree == NULL)
		return (NULL);

	if (tree->right)
	{
		temp = tree->right->left;
		hlp = tree->right;
		hlp->parent = tree->parent;
		hlp->left = tree;
		tree->parent = hlp;
		tree->right = temp;
		if (temp)
			temp->parent = tree;
		return (hlp);
	}
	return (NULL);
}
