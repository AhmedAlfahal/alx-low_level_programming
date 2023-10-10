#include "main.h"

/**
*	print_dog - prints a dog information
*
*	@d: struct dog *
*  Return: void
**/

void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf("Name: ");
	if (d->name)
		printf("%s\n", d->name);
	else
		printf("(nil)\n");
	printf("Age: %f\n", d->age);
	printf("Owner: ");
	if (d->owner)
		printf("%s\n", d->owner);
	else
		printf("(nil)\n");
}
