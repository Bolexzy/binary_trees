#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: If no common ancestors return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	if (first && second)
	{
		if (first == second || second == first->left || second == first->right)
			return ((binary_tree_t *) first);

		if (first->parent && second->parent)
			return (binary_trees_ancestor(first->parent, second->parent));
	}
	return (NULL);
}
