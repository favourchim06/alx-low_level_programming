#include "dog.h"
#include <stdlib.h> /* Include the standard library for free */

/**
 * free_dog - Frees memory allocated for a dog structure
 * @d: Pointer to the dog structure to free
 *
 * Description: This function frees the memory allocated for the dog structure,
 * including the name and owner strings within the structure. If d is NULL, it
 * does nothing.
 */
void free_dog(dog_t *d)
{
    if (d != NULL)
    {
        /* Free the memory allocated for the name and owner strings */
        free(d->name);
        free(d->owner);

        /* Free the memory allocated for the dog structure itself */
        free(d);
    }
}
