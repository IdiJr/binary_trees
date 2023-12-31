#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: pointer to the root node of the tree to measure.
 * Return: size of the binary tree, 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, right_node = 0, left_node = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		left_node = binary_tree_size(tree->left);
		right_node = binary_tree_size(tree->right);
		size = right_node + left_node + 1;
	}
	return (size);
}
