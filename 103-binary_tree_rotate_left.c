#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate a BT to the left
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to new root node of the tree rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *aux, *tmp;

	if (tree == NULL)
		return (NULL);

	if (tree->right)
	{
		tmp = tree->right->left;
		aux = tree->right;
		aux->parent = tree->parent;
		aux->left = tree;
		tree->parent = aux;
		tree->right = tmp;
		if (tmp)
			tmp->parent = tree;
		return (aux);
	}
	return (NULL);
}
