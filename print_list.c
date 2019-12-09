#include "list.h"

/**
 *prints a linked list
 */

int print_list(node_t* head)
{
  node_t* current = head;

  if (!current)
    {
      return 1;
    }

  while (current)
    {
      printf("%d\n", current->val);
      current = current->next;
    }
  
  return 0;
}

