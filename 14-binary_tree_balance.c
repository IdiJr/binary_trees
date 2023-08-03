#include "binary_trees.h"

/**
 * binary_tree_height_b - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the tree else, 0 if tree is NULL
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (tree != NULL)
		{
			left = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
			right = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
		}
		return ((left > right) ? left : right);
	}
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balanced factor else, 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int right = 0, left = 0, total = 0;

	if (tree)
	{
		left = ((int)binary_tree_height_b(tree->left));
		right = ((int)binary_tree_height_b(tree->right));
		total = left - right;
	}
	return (total);
}
