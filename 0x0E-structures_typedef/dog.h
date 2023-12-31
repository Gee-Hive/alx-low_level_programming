#ifndef DOG
#define DOG

/**
 * struct dog - defines a new structure of type dog
 * @name: first field
 * @age: second field
 * @owner: third field
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
