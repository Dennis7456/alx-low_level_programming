#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - display all elements of dlistint_t list
 * @h: pointer to the start of the linked list
 * 
 * Retuen the number of nodes
 * 
 */

size_t print_dlistint(const dlistint_t *h){

    size_t n;
    for (n = 0; h != NULL; n++){
        printf("%d\n", h->i);
        h = h->next;
    }

    return(n);
}