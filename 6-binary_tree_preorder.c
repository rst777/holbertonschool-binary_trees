#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverses a binary tree in pre-order.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Return: Nothing.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
/* Vérifie si tree ou func est NULL */

	if (tree == NULL || func == NULL)
	return;

/* Appelle la fonction avec la valeur du noeud actuel */
	func(tree->n);

/* Parcours récursif du sous-arbre gauche */
	binary_tree_preorder(tree->left, func);

/* Parcours récursif du sous-arbre droit*/
	binary_tree_preorder(tree->right, func);
}

