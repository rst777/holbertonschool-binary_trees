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
	size_t left_nodes = 0;
	size_t right_nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}


	if (tree->left != NULL)
	{
		left_nodes = binary_tree_nodes(tree->left);
	}

	if (tree->right != NULL)
	{
		right_nodes = binary_tree_nodes(tree->right);
	}

	if (tree->left != NULL ||  tree->right != NULL)
	{
		return (1 + left_nodes + right_nodes);
	}
	else
	{
		return (left_nodes + right_nodes);
	}
}
