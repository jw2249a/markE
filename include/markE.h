#ifndef MARKE_H
#define MARKE_H
/* function prototypes */
void create(char *argv); // options to create a app or a static from here
void run(void); // run server from application or static dependending on location
void build(void);// build a project so it is ready to deploy (compiles into binaries)
void merge(void); // merge branched apps or statics
void branch(char *argv); //branch an app or static
#endif 
