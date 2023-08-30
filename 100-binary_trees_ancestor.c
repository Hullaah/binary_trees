#include "binary_trees.h"
/**
 * depth - calculates the depth of a node
 * @node: node whose depth is to be calculated
 * Return: depth of node
*/
size_t depth(const binary_tree_t *node)
{
	return (node && node->parent ? 1 + depth(node->parent) : 0);
}
/**
 * binary_trees_ancestor -  finds the lowest common ancestor of two nodes
 * @first: first node
 * @second: second node
 * Return: lowest common ancestor of first and second nodes
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	int distance, i;
	binary_tree_t *ancestor;

	if (!first || !second)
		return (NULL);
	distance = depth(first) - depth(second);
	if (distance < 0)
	{
		ancestor = first->parent;
		distance = -distance;
		for (i = 1; i < distance; i++)
			ancestor = ancestor->parent;

	}
	else
	{
		ancestor = second->parent;
		for (i = 1; i < distance; i++)
			ancestor = ancestor->parent;
	}
	return (ancestor);
}
