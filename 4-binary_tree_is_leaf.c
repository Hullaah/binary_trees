#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf node
 * @node: the node to be checked
 * Return: 0 if not leaf node and 1 if it is
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return (node ? (!node->left && !node->right) : 0);
}
