#ifndef DOG_h
#define DOG_h

/**
 * struct dog - a doggo
 * @name: doggo name
 * @age: doggo age
 * @owner: doggo owner
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
#endif
