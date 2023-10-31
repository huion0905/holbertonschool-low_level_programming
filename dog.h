#include <stdio.h>
#include "dog.h"

/**
 *init_dog - Function that initialize a variable of type `struct dog`
 *@d: type struct dog
 *@name: name for the dog of type struct dog
 *@age: age for the dog of type struct dog
 *@owner: owner of the dog of type struct dog
 *Return: void
 */

#ifndef DOG_H
#define DOG_H

struct dog {
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */


int main(void)
{
	struct dog my_dog;
	my_dog.name = "Poppy";
       	my_dog.age = 3.5;
	my_dog.owner = "Bob";
	printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
	return (0);
}
