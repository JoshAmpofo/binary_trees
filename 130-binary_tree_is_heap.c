#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to tree whose size will be measured
 *
 * Return: size of the tree or 0 if tree is NULL;
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) +
			binary_tree_size(tree->right) + 1);
}

/**
 * is_complete - checks if tree is complete
 *
 * @tree: pointer to the tree been checked for completeness
 * @idx: node index
 * @cnt_nodes: number of nodes
 *
 * Return: 1 if tree is complete, 0 otherwise
 */
int is_complete(const binary_tree_t *tree, int idx, int cnt_nodes)
{
	if (tree == NULL)
		return (1);

	if (idx >= cnt_nodes)
		return (0);

	return (tree_is_complete(tree->left, (2 * i) + 1, cnt_nodes) &&
		tree_is_complete(tree->right, (2 * i) + 2, cnt_nodes));
}

/**
 * binary_tree_is_complete - calls is_complete function
 *
 * @tree: pointer to tree to call
 *
 * Return: 1 if tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t cnt_nodes;

	if (tree == NULL)
		return (0);

	cnt_nodes = binary_tree_size(tree);

	return (is_complete(tree, 0, cnt_nodes));
}

/**
 * check_parent - checks if parent has a greater value than its children
 *
 * @tree: pointer to the node
 *
 * Return: 1 if parent has a greater value, 0 otherwise
 */
int check_parent(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (1);

	if (tree->n > tree->parent->n)
		return (0);

	return (check_parent(tree->left) && check_parent(tree->right));
}

/**
 * binary_tree_is_heap - checks if a BT  is a valid Max Binary Heap
 *
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is valid, 0 otherwise. 0 if tree is NULL
 */
int binary_tree_is_heap(const binary_tree_t *tree)
{
	if (!binary_tree_is_complete(tree))
		return (0);

	return (check_parent(tree->left) && check_parent(tree->right));
}
