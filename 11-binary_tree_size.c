#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size (number of nodes) of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Size of the binary tree, 0 if tree is NULL
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
        size_t left_size, right_size;

        if (tree == NULL)
                return (0);

        left_size = binary_tree_size(tree->left);
        right_size = binary_tree_size(tree->right);

        return (left_size + right_size + 1);
}
