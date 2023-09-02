#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return:Always 0(success)
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(agrv[1]) * atoi(atgv[2]));
	return (0);
}
