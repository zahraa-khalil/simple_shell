#include "main.h"

/**
 *_stringTok - function to execute.
 *@string: string to execute
 *@delim: delimiter
 *Return: 0 on success
 */

char **_stringTok(char *string, char *delim)
{
	char **array_Of_Words = NULL, *token, *temp_ptr = NULL;
	int counter = 0;

	if (!string)
		return (NULL);
	temp_ptr = _strdup(string);
	if (temp_ptr == NULL)
	{
		free(string), string = NULL;
		perror("malloc");
		return (NULL);	}
	token = strtok(temp_ptr, delim);
	if (token == NULL) /*Handle spaces only*/
	{
		free(temp_ptr), temp_ptr = NULL;
		free(string), string = NULL;
		return (NULL);	}
	while (token)
	{
		counter++;
		token = strtok(NULL, delim);	}
	free(temp_ptr), temp_ptr = NULL;

	array_Of_Words = malloc((counter + 1) * (sizeof(char *)));
	if (array_Of_Words == NULL)
	{
		free(string), string = NULL;
		return (NULL);
	}
	counter = 0;
	token = strtok(string, delim);
	while (token)
	{
		array_Of_Words[counter] = _strdup(token);
		token = strtok(NULL, delim);
		counter++;
	}
	free(string), string = NULL;
	array_Of_Words[counter] = NULL;
	return (array_Of_Words);
}
