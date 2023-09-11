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
void print_dog(struct dog *d);

/* Define dog_t as an alias for struct dog */
typedef struct dog dog_t;

#endif /* DOG_H */
