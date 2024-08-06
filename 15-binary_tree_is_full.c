#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_full - Vérifie si un arbre binaire est plein.
 * Un arbre binaire est plein si chaque nœud a soit 0, soit 2 enfants.
 *
 * @tree: Pointeur vers le nœud racine de l'arbre binaire à vérifier.
 *
 * Return: 1 si l'arbre est plein, 0 sinon.
 * Si l'arbre est NULL, retourne 0.
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	if (tree->left != NULL && tree->right != NULL)
	{
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	}

	return (0);
}

