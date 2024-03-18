#include "binary_trees.h"

/**
 * binary_tree_postorder - function that creates a binary tree node
 * @tree: pointer to the parent node of the node to create
 * @func: pointer of function
 * Return: pointer to the new node, nothing on null
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL || tree == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
