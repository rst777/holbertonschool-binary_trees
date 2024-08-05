#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_node - Creates a new binary tree node
 * @parent: Pointer to the parent node
 * @value: Value to put in the new node
 *
 * Return: Pointer to the new node, or NULL on failure
 *
 * Description: Allocates memory for a new node and initializes its
 * fields with the given parent and value. The left and right
 * children pointers are set to NULL.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)

{
	binary_tree_t *tr = malloc(sizeof(*tr));

	if (tr == NULL)
	{
		fprintf(stderr, "Erreur allocation mémoire.\n");
		return (NULL);
	}
	tr->n = value; /* Initialise la valeur du noeud */
	tr->left = NULL; /* Initialise le pointeur gauche à NULL */
	tr->right = NULL; /* Initialise le pointeur droite à NULL */
	tr->parent = parent; /* Initialise le parent au parent donné */

	return (tr); /* Retourne le pointeur vers le nouveau noeud */

}

