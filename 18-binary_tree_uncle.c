#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, or NULL if no uncle or node is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)

{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

/* Vérifie si le nœud ou son parent est NULL */
	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}

	parent = node->parent; /* Obtient le parent du nœud */
	grandparent = parent->parent; /* Obtient le grand-parent du nœud */

	if (grandparent == NULL)
	{
		return (NULL);
	}
/* Détermine si le parent est le fils gauche ou droit du grand-parent */
	if (grandparent->left == parent)
	{
/* Le parent est l'enfant gauche, donc l'oncle est l'enfant droit */
		return (grandparent->right);
	}
	else
	{
/* Le parent est l'enfant droit, donc l'oncle est l'enfant gauche */
		return (grandparent->left);
	}
}
