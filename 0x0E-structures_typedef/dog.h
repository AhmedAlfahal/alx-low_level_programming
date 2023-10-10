#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
/**
*	struct dog - dog representive
*
*	@name: char *
*
*	@age: float
*
*	@owner: char *
*
*	Description: dog and who owns it and his age and the owner.
**/

typedef struct dog
{
	char	*name;
	float	age;
	char	*owner;
}			dog_t;

void	init_dog(struct dog *d, char *name, float age, char *owner);
void	print_dog(struct dog *d);
dog_t	*new_dog(char *name, float age, char *owner);
void	free_dog(dog_t *d);
#endif
