#include "binary_trees.h"

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
        binary_tree_t *tree, *tmp;

	if (!parent)
		return (NULL);
	tree = malloc(sizeof(binary_tree_t));
        if (!tree)
                return (NULL);
        tree->left = parent->left;
        tree->right = NULL;
        tree->n = value;
        tree->parent = parent;
        parent->left = tree;
        return (parent->left);
}
