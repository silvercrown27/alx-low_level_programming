#ifndef DOG_H
#define DOG_H

/**
 *struct dog - struct dog
 *init_dog - initialize a variable of type struct dog
 *@d: pointer to struct dog to initialize
 *@name: name to initialize
 *@age: age to initialize
 *@owner: owner to initialize
 *Return: void
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif /*DOG_H*/
