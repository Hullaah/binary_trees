#include "binary_trees.h"
/**
 * height
*/
size_t height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree)
	{
		height_r = tree->right ? 1 + height(tree->right) : 0;
		height_l = tree->left ? 1 + height(tree->left) : 0;
	}
	return (height_l > height_r ? height_l : height_r);
}
int binary_tree_balance(const binary_tree_t *tree)
{
	return (height(tree->left) - height(tree->right));
}
