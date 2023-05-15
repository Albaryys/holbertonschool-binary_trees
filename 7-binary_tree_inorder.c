#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using in-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to the function to call for each node.
 *        The value in the node is passed as a parameter to this function.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check if tree or func is NULL, in which case, do nothing */
    if (tree == NULL || func == NULL)
        return;

    /* Traverse the left subtree in in-order */
    binary_tree_inorder(tree->left, func);

    /* Call the function for the current node */
    func(tree->value);

    /* Traverse the right subtree in in-order */
    binary_tree_inorder(tree->right, func);
}
