#include "binary_trees.h"
/**
 * is_leaf - checks if a node is a leaf
 * @node: the node to be checked
 * Return: 1 if a node and 0 if not
 */
int is_leaf(const binary_tree_t *node)
{
	return (node ? (!node->left && !node->right) : 0);
}
/**
 * binary_tree_leaves - counts leaves in a binary tree
 * @tree: the tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (is_leaf(tree))
		return (1);
	if (tree)
		return (binary_tree_leaves(tree->right) +
			binary_tree_leaves(tree->left));
	return (0);
}
