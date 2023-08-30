#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left child of a parent node
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the new node, or NULL if memory allocation fails or
 * if parent is NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	new_node->left = parent->left;

	if (parent->left != NULL)
	{
		parent->left->parent = new_node;
	}
	else
		new_node->left = NULL;

	parent->left = new_node;

	return (new_node);
}
