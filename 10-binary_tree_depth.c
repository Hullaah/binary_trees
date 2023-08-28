#include "binary_trees.h"
/**
 * binary_tree_depth - gets depth of a binary tree node
 * @tree: the tree to be checked
 * Return: the depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return (tree && tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}
