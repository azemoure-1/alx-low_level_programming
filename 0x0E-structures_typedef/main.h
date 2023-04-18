#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

int _putchar(char C);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

