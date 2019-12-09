#include "list.h"

/**
 * Creates a linked list
 */

int main()
{
  node_t* current = NULL;
  node_t* head = NULL;
  int i = 0;

  current = malloc(sizeof(node_t));
  head = current; //beginning of linked list  

  for(i = 1; i <= 10; i++)
    {
      if (!current)
        {
          return 1;
        }
      current->val = i;
      if (current->val < 10)
        {
          current->next = malloc(sizeof(node_t));
          current = current->next;
        }
    }

  if (print_list(head))
    {
      printf("print_list\n");
      return (1);
    }

  return 0;
}
