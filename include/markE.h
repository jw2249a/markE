#ifndef MARKE_H
#define MARKE_H
/* define branches */
typedef struct _branch {
  char *name;
  char *date;
  char *user;
  struct _branch *origin;
} BRANCH;
/* define applications */
typedef struct _app {
  struct BRANCH *current;
  struct BRANCH *next;
  struct _app *parent;
  struct _app *child;
} APP;
/* relate apps to main project */ 
typedef struct _project {
  struct APP *current;
} project;
#endif 
