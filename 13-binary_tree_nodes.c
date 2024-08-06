#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_nodes - Compte le nombre de nœuds avec au moins un enfant
 * dans un arbre binaire.
 *
 * @tree: Pointeur vers le nœud racine de l'arbre binaire à compter.
 *
 * Return: Le nombre de nœuds avec au moins un enfant.
 * Si l'arbre est NULL, retourne 0.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	size_t left_height = binary_tree_nodes(tree->left);
	size_t right_height = binary_tree_nodes(tree->right);

	if (tree->left != NULL ||  tree->right != NULL)
	{
		return (1 + left_height + right_height);
	}
	else
	{
		return (left_height + right_height);
	}
}
