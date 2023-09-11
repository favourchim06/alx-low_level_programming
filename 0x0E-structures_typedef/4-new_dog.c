#include "dog.h"
#include <stdio.h>  /* Include standard library for printf */
#include <stdlib.h> /* Include standard library for malloc */
#include <string.h> /* Include standard library for string functions */

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *new_dog_ptr;
    char *name_copy, *owner_copy;

    /* Allocate memory for the new dog */
    new_dog_ptr = malloc(sizeof(dog_t));
    if (new_dog_ptr == NULL)
        return (NULL);

    /* Allocate memory and copy name */
    name_copy = malloc(sizeof(char) * (strlen(name) + 1));
    if (name_copy == NULL)
    {
        free(new_dog_ptr);
        return (NULL);
    }
    strcpy(name_copy, name);

    /* Allocate memory and copy owner */
    owner_copy = malloc(sizeof(char) * (strlen(owner) + 1));
    if (owner_copy == NULL)
    {
        free(name_copy);
        free(new_dog_ptr);
        return (NULL);
    }
    strcpy(owner_copy, owner);

    /* Set the new dog's members */
    new_dog_ptr->name = name_copy;
    new_dog_ptr->age = age;
    new_dog_ptr->owner = owner_copy;

    return (new_dog_ptr);
}
