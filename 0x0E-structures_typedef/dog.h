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

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
