#include <stdio.h> 
#include <db.h>


int main(int argc, char *argv[])
{
  DBT key, data;
  DB *dbp;
  u_int32_t flags;
  int ret;
  char database[] =  __FILE__".db";
  
  printf("there were %d commands\n", argc);
  while (*argv != '\0')
    {
      printf("%s \n", *argv);
      argv++;
    }
  ret = db_create(&dbp, NULL, 0);
  flags = DB_CREATE;
  if (ret != 0)
    {
      /* error handling goes here*/
    }
  /* opening a database */
  //ret = dbp->open(dbp,NULL,database, NULL, DB_BTREE, flags, 0);
  if (ret != 0)
    {
      /* error handling goes here*/
    }
  if (dbp != NULL)
    {
      /*closing a database*/
      // dbp->close(dbp,0);
      dbp->remove(dbp,database, NULL, 0);
    }
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
