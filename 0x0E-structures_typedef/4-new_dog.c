#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The name of the owner of the dog
 * Return: returns the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pDog;

	pDog = malloc(sizeof(dog_t));
	if (pDog == NULL)
		return (NULL);
	pDog->name = name;
	pDog->age = age;
	pDog->owner = owner;
	return (pDog);
}
