#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: The depth of the tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t left_depth, right_depth;

	if (tree == NULL)
	{
		return (0);
	}
/*Appels récursifs pour mesurer la profondeur des sous-arbres G D */
	left_depth = binary_tree_depth(tree->left);
	right_depth = binary_tree_depth(tree->right);

/* Compare les depth des sous-arbres G D, ajoute 1 pour le noeud courant */
	return ((left_depth > right_depth ? left_depth : right_depth) + 1);
}
