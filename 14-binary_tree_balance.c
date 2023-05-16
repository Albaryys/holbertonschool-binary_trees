#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_height(const binary_tree_t *tree);
int max(int a, int b);

/**
 * binary_tree_balance - Measure the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The balance factor of the tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The height of the tree
 */
int binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (-1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + max(left_height, right_height));
}

/**
 * max - Find the maximum of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: The maximum of the two numbers
 */
int max(int a, int b)
{
	return (a > b ? a : b);
}

