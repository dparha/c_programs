#include <stdio.h>

int main(int argc, char *argv[])
{
  int i = 0;
  while (i <= 25)
    {
      if (i != 0)
        {
          printf("%d", i);
          if (i != 25)
            {
              printf(" ");
            }
        }
      i++;
    }
  printf("\n");

  return 0;

}
