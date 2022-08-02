#ifndef FILE_DOG
#define FILE_DOG

/**
 * struct dog -dog structure
 * @name: attribute pointer
 * @age: age
 * @owner: attribute owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

typeof struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

void free_dog(dog_t *d);

#endif
