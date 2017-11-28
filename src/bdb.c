#include "../include/bdb.h"
char *database =  __FILE__".db";
int initialize_project()
{
  ret = db_create(&dbp, NULL, 0);
  flags = DB_CREATE;
  if (ret != 0)
    {
      /* error handling goes here*/
    }
  /* opening a database */
  ret = dbp->open(dbp,NULL,database, NULL, DB_BTREE, flags, 0);
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
      //dbp->remove(dbp,database,NULL,0);
      /* return success or error 
      fprintf(stderr, "%s: %s/n", "my_program",
              db_strerror(ret));
      return(ret); */
    }
  return 0;
}
