#include "main.h"

/**
 *_check_operators -  print error message.
 *@str: str.
 *Return: array_Of_Words_semi.
 */

char **_check_operators(char *str)
{
	char **array_Of_Words_semi = NULL;

	char *found = NULL, *string = NULL;
	int iter = 0;
	char *operators[] = {
		";", "&&", "||", NULL};

	string = _strdup(str);

	while (operators[iter])
	{
		found = _strstr(string, operators[iter]);
		if (found)
		{
			array_Of_Words_semi = _handle_operator(iter, string);
			free(found), found = NULL;
			return (array_Of_Words_semi);
		}
		iter++;
	}

	array_Of_Words_semi = malloc(2 * (sizeof(char *)));

	array_Of_Words_semi[0] = string;
	array_Of_Words_semi[1] = NULL;
	return (array_Of_Words_semi);
}


/**
 *_handle_operator -  print error message.
 *@iter: iter.
 *@string: string
 *Return: array_Of_Words_semi.
 */

char **_handle_operator(int iter, char *string)
{
	char **array_Of_Words_semi = NULL;

	switch (iter)
	{
	case 0: /*" ; "*/
		array_Of_Words_semi = _semicolon(string);

		return (array_Of_Words_semi);
	default:
		break;
	}
	return (array_Of_Words_semi); /*Temp*/
}

/**
 *_semicolon -  print error message.
 *@string: string
 *Return: array_Of_Words_semi.
 */

char **_semicolon(char *string)
{
	char **array_Of_Words_semi = NULL;

	array_Of_Words_semi = _stringTok(string, ";");
	return (array_Of_Words_semi);
}
