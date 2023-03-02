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
		if (first == second || first == second->parent)
			return ((binary_tree_t *) first);

		return (binary_trees_ancestor(first->parent, second->parent));
	}
	return (NULL);
}
