# include "lists.h"

/**
 * dlistint_len - count the number of nodes in th elinked list
 * @h: pointer to the beginning of a linked list
 * 
 * Return: number of nodes
 * 
 */

size_t dlistint_len(const dlistint_t *h)
{
    size_t n;

    for (n = 0; h !=NULL; n++)
        h = h->next;
    return (n);
}