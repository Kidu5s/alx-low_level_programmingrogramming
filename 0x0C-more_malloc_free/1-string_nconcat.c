#include "main.h"

/**
 * string_nconcat - concatnates two strings
 * @s1: the first string
 * @s2: the second string
 * @n: number of bytes from s2 to be concatinated
 *
 * Return: NULL if it fails
 * A pointer to the newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len, len2;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len = 0; s2[len]; len++)
		;
	len++;
	for (len2 = 0; s1[len2]; len2++)
		;
	len2++;
	if (n >= len)
		n = len;
	ptr = malloc(sizeof(char) * (len2 + n));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		ptr[i] = s1[i];
	for (j = 0; j < n; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';
	return (ptr);
}
