#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: the node whose sibling you are to find
 * Return: the isbling or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (!parent->left || !parent->right)
		return (NULL);
	if (node == parent->left)
		return (parent->right);
	return (parent->left);
}
