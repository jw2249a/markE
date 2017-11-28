#include "../include/bdb.h"

int initialize_project(char *projectName)
{
  char projName[100];
  sprintf(projName, "%s.db", projectName);
  ret = db_create(&dbp, NULL, 0);
  flags = DB_CREATE;
  if (ret != 0)
    {
      /* error handling goes here*/
    }
  /* opening a database */
  ret = dbp->open(dbp,NULL,projName, NULL, DB_BTREE, flags, 0);
  if (ret != 0)
    {
      /*error handling goes here
      fprintf(stderr, "%s: %s/n", "my_program",
              db_strerror(ret));
              return(ret);
      */
    }
  if (dbp != NULL)
    {
      /*closing a database*/
      dbp->close(dbp,0);
      //dbp->remove(dbp,projectname,NULL,0);
      /* return success or error 
      fprintf(stderr, "%s: %s/n", "my_program",
              db_strerror(ret));
      return(ret); */
    }
  return 0;
}
