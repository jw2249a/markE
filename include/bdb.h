#ifndef BDB_H
#define BDB_H
#include <db.h>
DBT key, data;
DB_ENV *dbe;
DB *dbp;
u_int32_t db_flags;
u_int32_t env_flags;
int ret;

/* transaction command */


/* function prototypes */
void db(void);
void dbenv(void);
void dbcurs(void);


#endif 
