#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return:length of string.
 */
int _strlen(char *str)
{
int length = 0;
while (*str++)
length++;
return (length);
}

/**
 * _strcopy - Copies string pointed to by src
 *
 * @dest:buffer storing string copy.
 * @src: source string
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
int i = 0;
for (i = 0; src[i]; i++)
dest[i] = src[i];
dest[i] = '\0';
return (dest);
}

/**
 * new_dog - Creates new dog.
 * @name: name of dog.
 * @age: age of dog.
 * @owner:owner of dog
 * Return: new struct dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *newDog;
if (name == NULL || age < 0 || owner == NULL)
return (NULL);
newDog = malloc(sizeof(dog_t));
if (newDog == NULL)
return (NULL);
newDog->name = malloc(sizeof(char) * (_strlen(name) + 1));
if (newDog->name == NULL)
{
free(newDog);
return (NULL);
}
newDog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
if (newDog->owner == NULL)
{
free(newDog->name);
free(newDog);
return (NULL);
}
newDog->name = _strcopy(newDog->name, name);
newDog->age = age;
newDog->owner = _strcopy(newDog->owner, owner);
return (newDog);
}
