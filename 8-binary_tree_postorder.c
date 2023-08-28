#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses a tree in postorder
 * @tree: the tree to be traversed
 * @func: the function to be executed
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
