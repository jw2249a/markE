#include "../include/bdb.h"

/* Initialize the environment and database(s) in that env */
int initialize_project(char *projectName)
{
  char projName[100];
  sprintf(projName, "%s.db", projectName);
  /* begin Env init */
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
  /* end Env init */
  /* begin db init */
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
  /* end db init */
  /* close Env and db */
  if (dbp != NULL)
    {
      /*closing a database*/
      dbp->close(dbp, 0);
    printf("database closed...\n");
    }
  if (dbe != NULL) {
    /* closing the environment */
    dbe->close(dbe, 0);
    printf("environment closed...\n");
  }
  return 0;
}

