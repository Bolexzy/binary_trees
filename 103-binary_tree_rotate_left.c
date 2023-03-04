#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Left-rotates a binary tree.
 * @tree: A pointer to the root node of the tree to rotate.
 *
 * Return: A pointer to the new root node after rotation.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp = NULL, *pivot_r = tree->right;

	if (tree != NULL && pivot_r != NULL)
	{
		if (pivot_r->left != NULL)
		{
			temp = pivot_r->left;

		}
		pivot_r->left = tree;
		pivot_r->parent = tree->parent;
		tree->parent = pivot_r;
		tree->right = temp;
		if (temp != NULL)
			temp->parent = tree;

		temp = pivot_r->parent;
		if (temp != NULL)
		{
			if (temp->left == tree)
				temp->left = pivot_r;
			else
				temp->right = pivot_r;
		}
		return (pivot_r);
	}
	return (NULL);
}
