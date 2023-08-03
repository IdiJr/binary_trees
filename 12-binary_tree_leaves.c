#include "binary_trees.h"
/**
 * binary_tree_leaves - function that returns the number of leaves in a tree
 * @tree: tree to check
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	leaf = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (leaf);
}
