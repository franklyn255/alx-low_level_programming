#ifndef DOG_H
#define DOG_H
/**
 * struct dog - create variables and stores information
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
