#include "main.h"

/**
 * _fork - function to fork a process
 * @array_Of_Words: the array of argv
 * @argv: the array of arguments
 * @index: line number.
 * Return: 0 on success
 */

int _fork(char **array_Of_Words, char **argv, int index)
{
	char *full_command;

	pid_t child_pid;
	int status;

	full_command = _get_path(array_Of_Words[0]);
	if (!full_command)
	{
		/*_error();*/
		_error_print(argv[0], array_Of_Words[0], index);

		_freeArrOfWords(array_Of_Words);

		return (127);
	}

	child_pid = fork();
	if (child_pid == -1)
	{
		perror("error");
		return (2);
	}

	if (child_pid == 0)
	{
		/*printf("FORK: this is child process");*/
		_exec(full_command, array_Of_Words);
	}
	else
	{
		waitpid(child_pid, &status, 0);
		_freeArrOfWords(array_Of_Words);
		free(full_command), full_command = NULL;
	}

	return (WEXITSTATUS(status));
}
