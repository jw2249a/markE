#include <stdio.h> 

int main(int argc, char *argv[])
{
  printf("there were %d commands\n", argc);
  while (*argv != '\0')
    {
      printf("%s \n", *argv);
      argv++;
    }
  return 0;
}


void create_project(char *argv)
{
}
void create_app(char *argv)
{
}
void branch(char *argv)
{
}
