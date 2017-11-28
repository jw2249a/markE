#include <stdio.h>
#include "../include/markE.h"

int main(int argc, char *argv[])
{
  printf("there were %d commands\n", argc);
  while (*argv != '\0')
    {
      printf("%s \n", *argv);
      argv++;
    }
  initialize_project();
  return 0;
}


void init(char *argv)
{}
// initialize a project
void create(char *argv)
{}
// options to create a app or a static from here
void run(void)
{}
// run server from application or static dependending on location
void build()
{}
// build a project so it is ready to deploy (compiles into binaries)
void merge()
{}
// merge branched apps or statics
void branch(char *argv)
{}
//branch an app or static 
