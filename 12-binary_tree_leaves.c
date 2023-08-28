#include "binary_trees.h"

int is_leaf(const binary_tree_t *node)
{
	return (node ? (!node->left && !node->right) : 0);
}

size_t binary_tree_leaves(const binary_tree_t *tree)
{
        if (is_leaf(tree))
                return 1;
        else
        {
                if (tree)
                        return (binary_tree_leaves(tree->right) +
                                binary_tree_leaves(tree->left));
        }
        return (0);
}
