#include "binary_trees.h"

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
        binary_tree_t *tree;

	if (!parent)
		return (NULL);
	tree = malloc(sizeof(binary_tree_t));
        if (!tree)
                return (NULL);
        tree->left = NULL;
        tree->right = parent->right;
        tree->n = value;
        tree->parent = parent;
        parent->right = tree;
        return (parent->right);
}
