#include <stdio.h>
/* define branches */
typedef struct _branch {
  char *name;
} BRANCH;
/* define applications */
typedef struct _app {
  struct BRANCH *current;
  struct BRANCH *next;
  struct _app *next;
} APP;
/* relate apps to main project */ 
typedef struct _project {
  struct APP *current;
} project;
