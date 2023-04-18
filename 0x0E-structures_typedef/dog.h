#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: A structure representing a dog, with name, age, and owner
 *              information.
 */
void free_dog(dog_t *d);
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif /* DOG_H */

