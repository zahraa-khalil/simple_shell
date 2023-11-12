#include "main.h"

/**
 *_exec - function to execute.
 *@array_Of_Words: the array of argv
 *@argv: the array of arguments
 *Return: 0 on success
 */

int _exec(char **array_Of_Words, char **argv)
{
	char **env = environ;

	/*if (execve(full_Command, array_Of_Words, env) == -1)*/
	if (execve(array_Of_Words[0], array_Of_Words, env) == -1)
	{
		/*
		 *if (array_Of_Words == NULL || array_Of_Words[0] == NULL) {
		 *	fprintf(stderr, "Invalid arguments for execve.\n");
		 *	exit(EXIT_FAILURE);
		 *}
		 */
		/*printf("array_Of_Words[0]: %s\n", array_Of_Words[0]);*/
		switch (errno)
		{
		case ENOENT:
			fprintf(stderr, "%s: %s\n", argv[0], strerror(errno));
			/*write(1, argv[0], 5);*/
			break;
		case EFAULT:
			fprintf(stderr, "%s: %s\n", argv[0], strerror(errno));
			break;
		case EACCES:
			fprintf(stderr, "Permission denied.\n");
			break;
		default:
			break;
			fprintf(stderr, "An error occurred: %d\n", errno);
		}

		exit(EXIT_FAILURE);
	}

	return (0);
}
