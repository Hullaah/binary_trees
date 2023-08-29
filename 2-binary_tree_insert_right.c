#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a right child on the parent node
 * @parent: the parent node
 * @value: the value for the new node
 * Return: a pointer to the new node
 */
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
        if (tree->right)
                tree->right->parent = tree;
        return (parent->right);
}
