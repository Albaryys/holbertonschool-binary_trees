#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to the function to call for each node.
 *        The value in the node is passed as a parameter to this function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check if tree or func is NULL, in which case, do nothing */
    if (tree == NULL || func == NULL)
        return;

    /* Traverse the left subtree in post-order */
    binary_tree_postorder(tree->left, func);

    /* Traverse the right subtree in post-order */
    binary_tree_postorder(tree->right, func);

    /* Call the function for the current node */
    func(tree->value);
}
