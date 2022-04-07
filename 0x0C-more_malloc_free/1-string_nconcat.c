#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: cutoff for s2
 * Return: pointer to concatenated string location
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int i, j, c, p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	s3 = (char *)malloc(sizeof(char) * (i + j + 1));
	if (s3 == NULL)
	{
		free(s3);
		return (NULL);
	}
	if (n >= j)
	{
		for (c = 0; c < 1; c++)
			s3[c] = s1[c];
		p = j;
		for (j = 0; j <= p; c++, j++)
			s3[c] = s2[j];
		return (s3);
	}
	else
	{
		for (c = 0; c < 1; c++)
			s3[c] = s1[c];
		p = (j - n);
		for (j = 0; j <= p; c++, j++)
			s3[c] = s2[j];
		return (s3);
	}
}
