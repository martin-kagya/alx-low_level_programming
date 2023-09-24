#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct list_s - linked list
 * @str: string data of list
 * @len: length of string
 * @next: pointer to next element of list
 * Description: illustration of a singly linked list
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
int _putchar(char *c);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);
void first()__attribute__((constructor));
void free_list(list_t *head);
list_t *add_node(list_t **head, const char *str);
size_t print_list(const list_t *h);
#endif
