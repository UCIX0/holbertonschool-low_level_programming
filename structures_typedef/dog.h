#ifndef _dawg
#define _dawg
/**
 * struct dog - initialize a dog struct
 * @name: string, name of the dog
 * @age: float, age of the dog
 * @owner: string, name of the owner
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
char *_strdup(char *str);
void free_dog(dog_t *d);

#endif
