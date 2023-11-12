#include "main.h"

/**
 *main - Write a program that prints all the arguments, without using ac.
 *@argv: is a NULL terminated array of strings
 *@argc: is the number of items in av
 *Return: Always 0.
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char **array_Of_Words = NULL, *line = NULL, *delim = "\n\t\r\a ";
	size_t len = 0;
	ssize_t nread;
	int file_stat; /*int status, file_stat; */

	if (isatty(STDIN_FILENO))
	{
		_puts("$ ");
		
		while ((nread = getline(&line, &len, stdin)) != -1)
		{
			if (nread != 1) /*Handle enter pressing*/
			{
				array_Of_Words = _stringTok(line, delim);
				if (_strcmp(array_Of_Words[0], "exit") == 0)
					exit_bul(array_Of_Words, line);
				if (isEnv(array_Of_Words[0]))
				{
					printf("$ ");
					continue; }
				file_stat = _stat(array_Of_Words[0]); /*fstat=0? fork:error*/
				file_stat == 0 ? _fork(array_Of_Words, argv) :
				printf("%s: No such file or directory\n", argv[0]);	}
			printf("$ ");	}	}
	else
	{ /*non interactive mode*/
		while (getline(&line, &len, stdin) != -1)
		{
			array_Of_Words = _stringTok(line, delim);
			if (_strcmp(array_Of_Words[0], "exit") == 0)
				exit_bul(array_Of_Words, line);
			if (isEnv(array_Of_Words[0]))
			{
				printf("$ ");
				continue;	}
			file_stat = _stat(array_Of_Words[0]);
			file_stat == 0 ? _fork(array_Of_Words, argv) :
			printf("%s:command not found\n", argv[0]);	}	}
	exit_bul(array_Of_Words, line);
	return (0);	}
