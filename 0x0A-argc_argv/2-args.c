#include <stdio.h>

/**
 * main _prints all arguments
 * @argc: argument count
 * @ardv: argument
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc ; i++)
		printf("%s\n", argv[i]);
	
	return (0);
}
