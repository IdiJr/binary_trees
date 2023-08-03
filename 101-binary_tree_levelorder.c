#include "binary_trees.h"

/**
 * binary_tree_levelorder - traverses a binary tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t level, maxlevel;

	if (!tree || !func)
		return;

	maxlevel = binary_tree_height(tree) + 1;

	for (level = 1; level <= maxlevel; level++)
		level_finder(tree, func, level);
}

/**
 * level_finder - traverses a binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * @level: the level of the tree to call func upon
 */
void level_finder(const binary_tree_t *tree, void (*func)(int), size_t level)
{
	if (level == 1)
		func(tree->n);
	else
	{
		level_finder(tree->left, func, level - 1);
		level_finder(tree->right, func, level - 1);
	}
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the tree else, 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
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
			left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((left > right) ? left : right);
	}
}
