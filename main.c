#include "monty.h"
/**
 * main - monty code interpreter
 * @argc: number of argument
 * @argv: file locator
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	FILE *file = fopen(argv[1], "r");
	if (file == NULL || !file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", arg[1]);
		exit(EXIT_FAILURE);
	}

