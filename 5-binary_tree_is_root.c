#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a binary tree node is the root node
 * @node: the node to be checked
 * Return: 0 if not root, and 1 if root
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node ? (node->parent ? 0 : 1) : 0);
}
