#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 *
 * Description: This function checks if the given node
 * is a leaf in a binary tree.
 * A node is considered a leaf if it has no left or right children.
 * If the node is NULL, the function returns 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

/* Vérifié si le noeud* est NULL */
if (node == NULL)
	{
	return (0);
	}
/* Vérifié si le noeud est une feuille*/
if (node->left == NULL && node->right == NULL)
{
	return (1);
}
/* Si ce n'est pas une feuille */

	return (0);
}
