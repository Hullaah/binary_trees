#include "binary_trees.h"
/**
 * height - gets the height of a binary tree
 * @tree: the tree
 * Return: the height of the tree
*/
int height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree)
	{
		height_r = tree->right ? 1 + height(tree->right) : 0;
		height_l = tree->left ? 1 + height(tree->left) : 0;
	}
	return (height_l > height_r ? height_l : height_r);
}
/**
 * binary_tree_balance - gets balance factor of the tree
 * @tree: the tree to be checked
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_right = 0, height_left = 0;

	if (!tree)
		return (0);
	height_right = tree->right ? height(tree->right) + 1: 0;
	height_left = tree->left ? height(tree->left) + 1: 0;
	return (height_left - height_right);
}
