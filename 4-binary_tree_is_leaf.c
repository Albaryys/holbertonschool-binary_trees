#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_is_leaf - Vérifie si un nœud est une feuille.
 * @node: Pointeur vers le nœud à vérifier.
 *
 * Return: 1 si le nœud est une feuille, sinon 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}

