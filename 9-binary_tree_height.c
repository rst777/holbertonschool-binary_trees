#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: poiter to the root node
 * Return: height of the tree, or 0 if tree is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{

	if (tree == NULL)
	{
		return (0);
	}

	size_t left_height = 0;
	size_t right_height = 0;

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
