#include "headers.h"
/**
 * _strcat - concatenates two strings
 *@dest: string appended by src
 *@src: string appending dest
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int j, k;

	j = 0;
	k = 0;

	while (dest[j] != '\0')
	{
		++j;
	}
	while (src[k] != '\0')
	{
		dest[j] = src[k];
		++j;
		++k;
	}
	dest[j] = '\0';
	return (dest);
}
/**
 * _strcmp - compares two strings
 *@s1: dest of string
 *@s2: src of string
 *
 * Return: n
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i] ; i++)
		if (s1[i] == '\0')
			return (0);
	return (s1[i] - s2[i]);

}
/**
* _strcpy - copy string
* @dest: address pointed to
* @src: string being pointed to
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int k = 0;

	while (src[k] != '\0')
	{
		dest[k] = src[k];
		++k;
	}
	dest[k] = '\0';
	++k;
	return (dest);
}
/**
 *_strlen - function to return length of a string
 *@s: pointer to the string
 *Return: 0
 */
int _strlen(char *s)
{
	int k = 0;

	while (*(s + k) != '\0')
		++k;
	return (k);
}
/**
 *_strncmp -  function that compares two strings.
 *@s1: string one
 *@s2: string two
 *@n: number of characters
 * Return: diference
 */
size_t _strncmp(char *s1, char *s2, size_t n)
{
	size_t i, j;

	for (j = 0; s1[j] != '\0' && j < n; j++)
	{
		i = s1[j] - s2[j];

		if (i != 0)
		{
			return (i);
		}
	}
	return (0);
}
