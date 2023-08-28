#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0, height_r = 0;

	if (tree)
	{
		height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	}
	return (height_l > height_r ? height_l : height_r);
}
