#include "binary_trees.h"
/**
 * binary_tree_size - gets size of a binary tree
 * @tree: the tree to be checked
 * Return: the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	size = tree ? 1 + binary_tree_size(tree->left) +
		binary_tree_size(tree->right) : 0;
	return (size);
}

