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

        if (tree->left != NULL)
        {
                left_height = binary_tree_height(tree->left) + 1;
        }

        if (tree->right != NULL)
        {
                right_height = binary_tree_height(tree->right) + 1;
        }

        if (left_height > right_height)
        {
                return (left_height);
        }

        else
        {
                return (right_height);
        }
}
/**
 * count_nodes - Count the number of nodes in a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Number of nodes, or 0 if tree is NULL
 */

/* Compter le nombre total de noeud dans l'arbre +1 pour le noeud courant */
size_t count_nodes(const binary_tree_t *tree)
{
        if (tree == NULL)
                return (0);

        return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}

/**
 * is_complete - Check if a binary tree is complete
 * @tree: Pointer to the root node of the tree
 * @index: Index of the current node
 * @node_count: Total number of nodes in the tree
 * Return: 1 if complete, 0 otherwise
 */

/* Voir si l'arbre est complet */
int is_complete(const binary_tree_t *tree, size_t index, size_t node_count)
{
        if (tree == NULL)
                return (1);

/* Vérifie si l'index du noeud est valide */
        if (index >= node_count)
                return (0); /* Si invalide pas complet */

/* Vérifie récursivement les sous-arbres G D pour voir si il est complet */
        return (is_complete(tree->left, 2 * index + 1, node_count) &&
                        is_complete(tree->right, 2 * index + 2, node_count));
}

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    // Initialisation des variables
    size_t height = 0;
    size_t node_count = 0;
    size_t expected_nodes = 0;

    // Si l'arbre est NULL, il n'est pas parfait
    if (tree == NULL)
        return (0);

    // Calcule la hauteur de l'arbre
    height = binary_tree_height(tree) - 1;

    // Compte le nombre total de n~Suds dans l'arbre
    node_count = count_nodes(tree);

    // Calcule le nombre attendu de n~Suds pour un arbre parfait de la hauteur donnée
    expected_nodes = (1 << (height + 1)) - 1;

    // Vérifie si l'arbre est complet et si le nombre de n~Suds correspond au nombre attendu pour un arbre parfait
    return (is_complete(tree, 0, node_count) &&
            (node_count == expected_nodes));
}
