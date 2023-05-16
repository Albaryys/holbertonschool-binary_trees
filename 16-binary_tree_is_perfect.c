#include "binary_trees.h"


size_t binary_tree_height(const binary_tree_t *tree);
int max(int a, int b);

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		else if (tree->left != NULL && tree->right != NULL)
			return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}

	return (0);
}

/**
 * binary_tree_height - Measure the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The height of the tree
 */
int binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	int left_height = binary_tree_height(tree->left);
	int right_height = binary_tree_height(tree->right);

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
