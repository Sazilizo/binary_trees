#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth_t = 0;

	if (tree == NULL)
		return (0);
	while (tree->parent)
	{
		depth_t++;
		tree = tree->parent;
	}

	return (depth_t);
}
