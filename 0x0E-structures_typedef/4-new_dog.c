#include "dog.h"

/**
*	new_dog - initilizing a dog
*
*	@name: char *
*
*	@age: float
*
*	@owner: char *
*
*  Return: return a pointer to the new dog
**/

dog_t	*new_dog(char *name, float age, char *owner)
{
	dog_t	*tmp = malloc(sizeof(dog_t) * 1);

	if (!name)
		return (free(tmp), NULL);
	tmp->name = name;
	tmp->age = age;
	if (!owner)
		return (free(tmp), NULL);
	tmp->owner = owner;
	return (tmp);
}
