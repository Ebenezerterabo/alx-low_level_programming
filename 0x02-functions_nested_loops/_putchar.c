#include "main.h"
#include "unistd.h"

/**
 *main - write c character to standout
 *
 *Return: Always 1 (Success)
 *Return: Always -1 (Error)
 */

 int _putchar (char c)
 {
	 return (write(1,&c, 1));

 }
