#include "main.h"

/**
 *_error_print -  print error message.
 *@file_name: file_name.
 *@command: command.
 *@index: index.
 *Return: void.
 */

void _error_print(char *file_name, char *command, int index)
{
	char *index_string, messeage[] = ": not found\n";

	index_string = _itoa(index);
	write(STDERR_FILENO, file_name, _strlen(file_name));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, index_string, _strlen(index_string));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, command, _strlen(command));
	write(STDERR_FILENO, messeage, _strlen(messeage));

	free(index_string);
}
