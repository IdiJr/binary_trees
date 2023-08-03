#include "binary_trees.h"

/**
 * tree_is_perfect - recursive function to check if a tree is perfect.
 * @tree: pointer to the root of the binary tree.
 * Return: the height of the tree if perfect, otherwise 0
 */
int tree_is_perfect(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (tree->left && tree->right)
	{
		l_height = 1 + tree_is_perfect(tree->left);
		r_height = 1 + tree_is_perfect(tree->right);
		if (r_height == l_height && r_height != 0 && l_height != 0)
			return (r_height);
		return (0);
	}
	else if (!tree->left && !tree->right)
		return (1);
	else
		return (0);
}

/**
 * binary_tree_is_perfect - check if a binary tree is perfect
 * @tree: pointer to the root of the binary tree
 * Return: 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (!tree)
		return (0);
	else
	{
		result = tree_is_perfect(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
