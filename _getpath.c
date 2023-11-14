#include "main.h"

/**
 *_get_path - function that return the full cmd path.
 *@cmd: the name of the environment variable
 *Return: Full command.
 */

char *_get_path(char *cmd)
{
	char *envir_path, *envir_path_tok, *full_cmd;
	int iter;
	struct stat buf;

	if (!cmd)
		return (NULL);

	for (iter = 0; cmd[iter]; iter++) /*if the cmd = /bin/ls*/
	{
		if (cmd[iter] == '/')
		{
			if (stat(cmd, &buf) == 0)
				return (_strdup(cmd));
			return (NULL);	}}
	envir_path = _getenv("PATH");
	if (envir_path)
	{
		envir_path_tok = strtok(envir_path, ":");
		while (envir_path_tok)
		{		/* '/' , '\0' */
			full_cmd = malloc(_strlen(cmd) + _strlen(envir_path_tok) + 2);
			if (full_cmd)
			{
				_strcpy(full_cmd, envir_path_tok);
				_strcat(full_cmd, "/");
				_strcat(full_cmd, cmd);
				_strcat(full_cmd, "\0");
				if (stat(full_cmd, &buf) == 0)
				{
					free(envir_path);
					return (full_cmd);
				}
				free(full_cmd), full_cmd = NULL;
				envir_path_tok = strtok(NULL, ":");
			}
		}
	}
	free(envir_path);
	return (NULL);
}
