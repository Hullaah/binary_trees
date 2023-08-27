#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: parent node of node to be created
 * @value: value of the new node
 * Return: pointer to created node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *tree;

	tree = malloc(sizeof(binary_tree_t));
	if (!tree)
		return (NULL);
	tree->left = NULL;
	tree->right = NULL;
	tree->parent = parent;
	tree->n = value;
        if (!parent)
	        parent = tree;
	return (tree);
}
