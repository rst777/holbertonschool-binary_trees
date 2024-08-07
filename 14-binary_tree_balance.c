#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: poiter to the root node
 * Return: height of the tree, or 0 if tree is NULL
 */

/* Fonction pour calculer la hauteur de l'arbre */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
	return (0);
	}
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		return ((left_height > right_height ? left_height : right_height) + 1);

}

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: Pointer to the root node of the tree to measure.
 *
 * Return: Balance factor of the binary tree.
 */

/* Fonction pour calculer l'équilibre de l'arbre */
int binary_tree_balance(const binary_tree_t *tree)

{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
	return (0);
	}
	/* Utilisation de size_t pour les hauteurs */
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((int)(left_height - right_height));
}
