#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - created new dog
 * @name: yep
 * @age: yep
 * @owner: yep
 * Return: pointer to nw dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int nname, nowner, i;

	newDog = malloc(sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);
	for (nname = 0; *(name + nname); nname++)
		;
	nname++;
	for (nowner = 0; *(owner + nowner); nowner++)
		;
	nowner++;
	newDog->name = malloc(nname * sizeof(char));
	if (newDog->name == NULL)
	{
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < nname; i++)
		*(newDog->name + i) = *(name + i);
	newDog->age = age;
	newDog->owner = malloc(nowner * sizeof(char));
	if (newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog);
		return (NULL);
	}
	for (i = 0; i < nowner; i++)
		*(newDog->owner + i) = *(owner + i);
	return (newDog);
}
