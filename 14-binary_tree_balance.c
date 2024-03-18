#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor If tree is NULL, return 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_t, right_t, count;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left_t = binary_tree_height(tree->left);
	right_t = binary_tree_height(tree->right);

	count = left_t - right_t;
	return (count);
}


/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 * Return: if null return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
        size_t left = 0;
        size_t right = 0;

        if (tree == NULL || (tree->left == NULL && tree->right == NULL))
                return (0);

        left = binary_tree_height(tree->left);
        right = binary_tree_height(tree->right);

        return ((left > right ? left : right) + 1);
}                                                                                                                                                    
