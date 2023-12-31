#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right
 * child of a parent node
 * @parent: Pointer to the parent node
 * @value: Value to be stored in the new node
 *
 * Return: Pointer to the new node, or NULL if memory allocation fails or
 * if parent is NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	else
		new_node->right = NULL;

	parent->right = new_node;

	return (new_node);
}
