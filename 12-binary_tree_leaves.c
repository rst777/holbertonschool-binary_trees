#include "binary_trees.h"
/**
 * binary_tree_leaves - Counts the number of leaves in a binary tree
 * @tree: Pointer to the root node of the binary tree
 *
 * Description: This function counts the number of leaves in a
 * binary tree. A leaf is defined as a node with no children.
 *
 * Return: The number of leaves in the tree, or 0 if the tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)

{
	size_t left_leaves, right_leaves;

 /* Si l'arbre est NULL, retourne 0 */
	if (tree == NULL)

	{
	return (0);
	}
/* Si le nœud est une feuille (pas d'enfants), retourne 1 */
	if (tree->left == NULL && tree->right == NULL)

	{
		return (1);
	}
/* Compte les feuilles dans les sous-arbres gauche et droit */
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

 /* Retourne la somme des feuilles des sous-arbres gauche et droit */
	return (left_leaves + right_leaves);

}

