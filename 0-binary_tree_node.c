#include "binary_trees.h"
/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value of the node to be created new
 *
 * Return: pointer to new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode = NULL;

	newnode = malloc(sizeof(binary_tree_t));
	if (newnode == NULL)
		return (NULL);

	newnode->left = NULL;
	newnode->right = NULL;
	newnode->n = value;
	newnode->parent = parent;

	return (newnode);
}

