#include "binary_trees.h"
/**
 * binary_tree_preorder - traverses a tree in pre order
 * @tree: the tree to be traversed
 * @func: the function to be executed
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
