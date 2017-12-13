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

/* function prototypes */
void init(char *argv); // initialize a project
void create(char *argv); // options to create a app or a static from here
void run(void); // run server from application or static dependending on location
void build();// build a project so it is ready to deploy (compiles into binaries)
void merge(); // merge branched apps or statics
void branch(char *argv); //branch an app or static 

int initialize_project(char *name);
#endif 
