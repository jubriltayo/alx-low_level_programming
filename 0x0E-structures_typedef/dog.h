#ifndef MAIN_H
#define MAIN_H

/**
  * struct dog - dog details
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  * Description: details of dog
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * my_dog - typedef for dog
  */
typedef struct dog my_dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* MAIN_H */
