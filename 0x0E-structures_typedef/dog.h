#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - a new type struct dog
 *
 * @name: the name of the dog_h
 * @age: the age of the dog_h
 * @owner: the owner of the dog_h
 *
 * Description: learning struct
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
