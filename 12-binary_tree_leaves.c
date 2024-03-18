#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: number of leaves, else null
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left_t, right_t, leaves;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	left_t = binary_tree_leaves(tree->left);
	right_t = binary_tree_leaves(tree->right);

	leaves = left_t + right_t;
	return (leaves);
}
