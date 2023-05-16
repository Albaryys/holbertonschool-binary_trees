#include "binary_trees.h"

int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_height(const binary_tree_t *tree);
int max(int a, int b);

int binary_tree_balance(const binary_tree_t *tree)
{
    int left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (left_height - right_height);
}

int binary_tree_height(const binary_tree_t *tree)
{
    int left_height, right_height;

    if (tree == NULL)
        return (-1);

    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    return (1 + max(left_height, right_height));
}

int max(int a, int b)
{
    return (a > b ? a : b);
}
