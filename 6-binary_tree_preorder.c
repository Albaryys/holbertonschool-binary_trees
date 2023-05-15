#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to the function to call for each node.
 *        The value in the node is passed as a parameter to this function.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check if tree or func is NULL, in which case, do nothing */
    if (tree == NULL || func == NULL)
        return;

    /* Call the function for the current node */
    func(tree->value);

    /* Traverse the left subtree in pre-order */
    binary_tree_preorder(tree->left, func);

    /* Traverse the right subtree in pre-order */
    binary_tree_preorder(tree->right, func);
}
