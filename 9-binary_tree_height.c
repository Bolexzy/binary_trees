#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height = 0;

	if (tree != NULL)
	{
		while (tree->left || tree->right)
		{
			if (tree->left)
			{
				tree = tree->left;
				height++;
			}
			else if (tree->right)
			{
				tree = tree->right;
				height++;
			}
		}
		return (height);
	}
	return (0);
}
