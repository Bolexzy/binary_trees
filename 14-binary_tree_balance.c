#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor.
 *
 * Return: If tree is NULL, return 0, else return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_tree = 0, right_tree = 0;

	if (tree)
	{
		left_tree = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
		right_tree = tree->right ? 1 + binary_tree_balance(tree->right) : 0;
		return (left_tree - right_tree);
	}
	return (0);
}
