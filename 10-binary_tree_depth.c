#include "binary_trees.h"
/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: A pointer to the root node of the tree to measure.
 *
 * Return: The depth of the tree.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree && tree->parent)
	{
		tree = tree->parent;
		depth++;
	}

	return depth;
}
