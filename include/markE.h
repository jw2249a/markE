#ifndef MARKE_H
#define MARKE_H

/* Command Handler */
typedef struct _parameters {
  unsigned int Initial: 1;
  unsigned int HasArg: 1;
  unsigned int ArgScope: 2;
  unsigned int: 0;
  char *arg;
} parameters;

#endif //MARKE_H
