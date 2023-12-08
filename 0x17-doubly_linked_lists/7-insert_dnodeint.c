#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * inset_dnodeint_a_index  inserts a new node at a given position
 *
 * @h: heas of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or Null if i failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
