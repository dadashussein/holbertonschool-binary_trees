#include "binary_trees.h"
/**
 * binary_tree_nodes - counts nodes
 * @tree: node pointer
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}
	nodes = binary_tree_size(tree) - binary_tree_leaves(tree);
	return (nodes);
}
