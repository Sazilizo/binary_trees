#include "binary_trees.h"

/**
 * binary_tree_size - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: If null return 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_t = 0;
	size_t right_t = 0;
	size_t size = 0;

	if (tree == NULL)
		return (0);

	left_t = binary_tree_size(tree->left);
	right_t = binary_tree_size(tree->right);

	size = left_t + right_t + 1;

	return (size);
}
