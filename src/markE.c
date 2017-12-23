#include <stdio.h>
#include "../include/bdb.h"
#include "../include/markE.h"


int main(int argc, char *argv[])
{
  printf("there were %d commands\n", argc);
  if (argv[1] != '\0')
    {
      initialize_project(argv[1]);
    }
  else
    {
      initialize_project(__BASE_FILE__);
    }
  return 0;
}
