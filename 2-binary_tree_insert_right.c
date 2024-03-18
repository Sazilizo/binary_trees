#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the riht-child in
 * @value: value to store in the new node
 *
 * Return: Pointer to the newly created node
 *         NULL on failure
 *         NULL if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_n;

	if (parent == NULL)
		return (NULL);

	new_n = malloc(sizeof(binary_tree_t));
	if (new_n == NULL)
		return (NULL);

	new_n->n = value;
	new_n->parent = parent;
	new_n->left = NULL;
	new_n->right = parent->right;
	parent->right = new_n;
	if (new_n->right)
		new_n->right->parent = new_n;
	return (new_n);
}
