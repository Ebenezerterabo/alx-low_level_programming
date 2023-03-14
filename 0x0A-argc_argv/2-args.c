#include <stdio.h>
 
/**
 * main - A program that prints all arguments it receivese
 * @argc : argument count
 * @argv : argument vector
 *
 * Return: Always 0 success
*/

int main(int argc, char *argv[])
{
	int x = 0;

	for (; x < argc; x ++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);

}
