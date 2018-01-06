#include <stdio.h>
#include "../include/markE.h"
int handler = 1;

int main(int argc, char *argv[])
{
  if (argc <= 1)
    {
    insufa:
      fprintf(stderr, "Arg[%d] Insufficient arguments\n  Usage: %s [-init] [file...]\n", handler,  argv[0]);
      printf("%s\n", argv[handler]);
      return 1;
    }
 commands:
  if (argv[++handler]!='\0')
    {
      if (argv[--handler][0]=='-')
        {
          switch (argv[handler][1])
        {
        case 'i':
          initialize_project(argv[++handler]);
          if (++handler < argc) goto commands;
          else break;
        }
      }
      else
        {
          goto insufa;
        }
    }
  else
    {
      goto insufa;
    }
  return 0;
}
