#include "list.h"

/**
 *frees memory of linked list
 */

void free_list(node_t* head)
{

  node_t* current = NULL;
  node_t* previous = NULL;

  current = previous = head;
  
  while (previous)
    {
      current = current->next;
      if (previous)
        free(previous);
      previous = current;
    }

}
