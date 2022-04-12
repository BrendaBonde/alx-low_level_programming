#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: dog owner
 * Return: NULL if it fails
 */
{
	dog_t *store;
	int j, k;

	store = malloc(sizeof(*store));
	if (store == NULL || name == NULL || owner == NULL)
	{
		free(store);
		return (NULL);
	}
	for (j = 0; name[j]; j++)
	{
		;
	}
	for (k = 0; owner[k]; k++)
	{
		;
	}
	store->name = malloc(j + 1);
	store_>owner = malloc(k + 1);
	if (store_>name == NULL || store_>owner == NULL)
	{
		fee(store_>name);
		free(store_>owner);
		free(store);
		return (NULL);
	}
	store->name = name;
	store_>age = age;
	store_>owner = owner;

	return (store);
}
