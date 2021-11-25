#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>

/**
 * struct dlistint_s
 * @i: integer
 * @next: points to the next node
 * @prev: points to the previous node
 * 
 * Description: doubly-linked list node structure
 */

typedef struct dlistint_s
{
    int i;
    struct dlistint_s *next;
    struct dlistint_s *prev;
    
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int i);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int i);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int n);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int dgt, int i);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif /* _LISTS_H_ */
