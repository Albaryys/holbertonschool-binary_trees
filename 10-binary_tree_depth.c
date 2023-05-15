#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: The depth of the node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
    /* Check if tree is NULL */
    if (tree == NULL)
        return (0);

    /* Initialize depth to 0 */
    size_t depth = 0;

    /* Traverse up the tree until reaching the root */
    while (tree->parent != NULL)
    {
        depth++;
        tree = tree->parent;
    }

    return depth;
}
