#include "binary_trees.h"
/**
 * binary_tree_size - size binary tree
 * @tree: node pointer
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
	{
		return (0);
	}
	size = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (size);
}
