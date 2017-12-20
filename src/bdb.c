#include "../include/bdb.h"

int initialize_project(char *projectName)
{
  char projName[100];
  sprintf(projName, "%s.db", projectName);
  ret = db_env_create(&dbe, env_flags);
  if (ret != 0) {
    fprintf(stderr, "Error creating env handle: %s\n", db_strerror(ret));
    return(ret);
  }
  env_flags = DB_CREATE | DB_INIT_MPOOL;
  ret = dbe->open(dbe,
                  "../env",
                  env_flags,
                  0);
  if (ret != 0) {
    fprintf(stderr, "Environment open failure: %s\n", db_strerror(ret));
    return(ret);
  }
  ret = db_create(&dbp, dbe, 0);
  db_flags = DB_CREATE;
  if (ret != 0)
    {
      fprintf(stderr, "DB creation failure: %s\n", db_strerror(ret));
      return(ret);
    }
  /* opening a database */
  ret = dbp->open(dbp, NULL, projName, NULL, DB_BTREE, db_flags, 0);
  if (ret != 0)
    {
      fprintf(stderr, "DB open failure: %s\n", db_strerror(ret));
      return(ret);
    }
  if (dbp != NULL)
    {
      /*closing a database*/
      dbp->close(dbp, 0);
      //dbp->remove(dbp,projectname,NULL,0);
      /* return success or error 
      fprintf(stderr, "%s: %s/n", "my_program",
              db_strerror(ret));
      return(ret); */
    }
  if (dbe != NULL) {
    /* closing the environment */
    dbe->close(dbe, 0);
  }
  return 0;
}

