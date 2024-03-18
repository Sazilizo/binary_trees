#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree
 * Return: number os nodes with min 1 child, null on failure
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int left_t, right_t, nodesWithChild;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_t = binary_tree_nodes(tree->left);
	right_t = binary_tree_nodes(tree->right);

	nodesWithChild = left_t + right_t + 1;
	return (nodesWithChild);
}
