#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return ((left > right ? left : right) + 1);
}

/**
 * is_perfect - checks if a tree is perfect recursively
 * @tree: pointer to current node
 * @depth: expected depth of leaves
 * @level: current level
 *
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
	if (!tree)
		return (1);

	if (!tree->left && !tree->right)
		return (depth == level);

	if (!tree->left || !tree->right)
		return (0);

	return (is_perfect(tree->left, depth, level + 1) &&
		is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binar_

