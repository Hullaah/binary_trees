#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the number of nodes
 * with children in a binary tree
 * @tree: the binary tree
 * Return: the number of node
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);
	if (tree->left && tree->right)
	{
		nodes++;
		return (nodes + binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right));
	}
	else if (tree->left)
	{
		nodes++;
		return (nodes + binary_tree_nodes(tree->left));
	}
	else if (tree->right)
	{
		nodes++;
		return (nodes + binary_tree_nodes(tree->right));
	}
	return (0);
}
