#include <stdio.h>
#include <unistd.h>

/**
 * main - prints exactly and that place of art is useful
 *
 * The Write() function takes three arguments:
 * 1. The file descriptor- 0|1|2
 * 2. The message or data to be written
 * 3. The number of bytes to be Written
 *
 * Return: Always 1 (FAILURE)
 */

int main(void)

{
	write(2, "and that piece of art is useful\"
- Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
