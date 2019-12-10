
#ifndef LISTS
#define LISTS

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
  int val;
  struct node* next;
} node_t;

typedef struct d_node {
  int val;
  struct d_node* next;
  struct d_node* prev;
} d_node_t;


int print_list(node_t* head);
int dprint_list(d_node_t* head);
void free_list(node_t* head);

#endif
