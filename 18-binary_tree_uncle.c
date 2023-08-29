#include "binary_trees.h"
/**
 * binary_tree_uncle - returns uncle of a binary tree node
 * @node: the node to be checked
 * Return: the uncle of the node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent, *grandparent;

	if (!node || !node->parent)
		return (NULL);
	parent = node->parent;
	if (!parent->parent)
		return (NULL);
	grandparent = parent->parent;
	if (!grandparent->left || !grandparent->right)
		return (NULL);
	if (parent == grandparent->right)
		return (grandparent->left);
	return (grandparent->right);
}
