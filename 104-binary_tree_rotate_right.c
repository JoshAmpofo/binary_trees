#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate a BT to the right
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to new root node of the tree rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *aux, *tmp;

	if (tree == NULL)
		return (NULL);

	if (tree->left)
	{
		tmp = tree->left->right;
		aux = tree->left;
		aux->parent = tree->parent;
		aux->right = tree;
		tree->parent = aux;
		tree->left = tmp;
		if (tmp)
			tmp->parent = tree;
		return (aux);
	}
	return (NULL);
}
