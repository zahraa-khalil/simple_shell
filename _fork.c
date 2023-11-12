#include "main.h"

/**
 * _fork - function to fork a process
 * @array_Of_Words: the array of argv
 * @argv: the array of arguments
 * Return: 0 on success
 */

int _fork(char **array_Of_Words, char **argv)
{
	pid_t child_pid;
	int status = 0; /*check if its valid to initialize with 0*/
	/*
	*char *args[] = {"ls", "-l", "/tmp/", NULL};
	*char *envp[] = {NULL};
	*/
	child_pid = fork();
	if (child_pid == -1)
	{
		perror("error");
		return (1);
	}

	if (child_pid == 0)
	{
		/*printf("FORK: this is child process");*/
		_exec(array_Of_Words, argv);
	}
	else
	{
		_wait(status);
	}

	return (0);
}
