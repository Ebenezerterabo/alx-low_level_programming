#ifndef LISTS_H
#define LISTS_H

/* Structure */
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed stringe)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node struture
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;


/* Standard library */
#include <stdio.h>
#include <stdlib.h>

/* Function Prototypes */
int _putchar(char c);
size_t print_list(const list_t *h);

#endif