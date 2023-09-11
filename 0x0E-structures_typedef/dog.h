#ifndef DOG_H
#define DOG_H

#include <stddef.h>  /* Include this header for NULL */

/* Define the struct dog type */
struct dog {
    char *name;
    float age;
    char *owner;
};

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
