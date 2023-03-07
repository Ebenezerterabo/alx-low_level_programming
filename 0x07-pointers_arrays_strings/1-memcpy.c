#include "main.h"
/**
 *_memcpy - A function that copies memory area
 *@dest: memory where is stored
 *@src: memory where is copied
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int a = 0;
	int c = n;

	for (; a < c; a++)
	{
		dest[a] = src[a];
		n--;
	}
	return (dest);
}

