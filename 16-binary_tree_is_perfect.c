#include "binary_trees.h"
#include <stdio.h>
/**
 * height_of_tree - gets height of a binary tree
 * @tree: the tree to be checked
 * Return: the height
 */
int height_of_tree(const binary_tree_t *tree)
{
	int height_l = 0, height_r = 0;

	if (tree)
	{
		height_r = tree->right ? 1 + height_of_tree(tree->right) : 0;
		height_l = tree->left ? 1 + height_of_tree(tree->left) : 0;
	}
	return (height_l > height_r ? height_l : height_r);
}
/**
 * depth_of_node - gets depth of a node
 * @node: the node to be checked
 * Return: the depth
 */
int depth_of_node(const binary_tree_t *node)
{
	return (node && node->parent ? 1 + depth_of_node(node->parent) : 0);
}
/**
 * perfect_helper - helper function for perfect checker
 * @node: the node to be checked
 * @depth: depth of the deepest node
 * Return: 1 if perfect and 0 if not
 */
int perfect_helper(const binary_tree_t *node, int depth)
{
	if (!node->left && !node->right)
	{
		return (depth_of_node(node) == depth);
	}
	if (!node->left || !node->right)
		return (0);
	return (perfect_helper(node->left, depth) &&
	perfect_helper(node->right, depth));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node
 * Return: 1 if perfect and 0 if not
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);
	depth = height_of_tree(tree);
	printf("Depth of tree is: %d\n", depth);
	if (depth == 0)
		return (1);
	return (perfect_helper(tree, depth));
}
