#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_size - Calcule la taille d'un arbre binaire.
 * La taille d'un arbre binaire est définie comme le nombre total de nœuds.
 *
 * @tree: Pointeur vers le nœud racine de l'arbre binaire à mesurer.
 *
 * Return: Le nombre de nœuds dans l'arbre binaire.
 * Si l'arbre est NULL, retourne 0.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
