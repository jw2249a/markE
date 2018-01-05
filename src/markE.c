#include <stdio.h>
#include "../include/bdb.h"
#include "../include/markE.h"


int main(int argc, char *argv[])
{
  if (argv[1] == '\0')
    {
    insufa:
      fprintf(stderr, "Insufficient arguments\n  Usage: %s [-i] [file...]\n", argv[0]);                   return 1;
    }
  else if (argv[1][0] =='-')
    {
      switch (argv[1][1])
        {
        case 'i':
          if (argv[2] != '\0')
            {
              initialize_project(argv[2]);
            }
          else
            {
              goto insufa;
            }

        }
    }
  else
    {
    }
  return 0;
}
