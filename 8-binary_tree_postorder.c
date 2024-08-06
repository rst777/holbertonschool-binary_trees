#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverse a binary tree using post-order traversal
 * @tree: Pointer to the root of the binary tree to traverse
 * @func: Pointer to a function to call for each node
 *
 * Description:
 * Performs a post-order traversal of the binary tree, calling the provided
 * function for each node. Post-order traversal visits the left and right
 * subtrees first, then the current node. If either @tree or @func is NULL,
 * the function does nothing.
 *
 * Return: Nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))

{
/* Ne fait rien si la fonction ou l'arbre est NULL */
	if (tree == NULL || func == NULL)
	{
		return;
	}
/* Parcourir le sous-arbre gauche */
	binary_tree_postorder(tree->left, func);

/* Parcourir le sous_arbre de droite */
	binary_tree_postorder(tree->right, func);

/* Appliquer la fonction au noeud courant */
	func(tree->n);
}
