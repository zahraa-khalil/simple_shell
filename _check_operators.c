#include "main.h"
char **  _check_operators(char *str)
{
	char ** array_Of_Words_semi = NULL;

	char *found = NULL, *string = NULL;
	int iter = 0;
	char *operators[] = {
		";", "&&", "||", NULL};

			string = _strdup(str);

	/*aaa ; bbb ; ccc ; ddd*/
	while (operators[iter])
	{
		found = _strstr(string, operators[iter]);
		if (found)
		{
									/*write(STDERR_FILENO, operators[iter], _strlen(operators[iter]));
									*write(STDERR_FILENO, "\n", 1);
									*write(STDERR_FILENO, string, _strlen(string));
									*write(STDERR_FILENO, "\n", 1);*/

			array_Of_Words_semi = _handle_operator(iter, string);
			free(found), found = NULL;
			return(array_Of_Words_semi);
		}

		iter++;
	}
	if (!found)
	{
		/*write(STDERR_FILENO, "Not", 3);
		*write(STDERR_FILENO, "\n", 1);*/

		/*free(found), found = NULL;*/
	}

		array_Of_Words_semi = malloc(2* (sizeof(char *)));

		array_Of_Words_semi[0] = string;
		array_Of_Words_semi[1] = NULL;
		return(array_Of_Words_semi);
}

char **  _handle_operator(int iter, char *string)
{
		char ** array_Of_Words_semi = NULL;

	/*{";", "&&", "||", NULL};*/
	/*write(STDERR_FILENO, "Hello ", 6);
	*write(STDERR_FILENO, "\n", 1);*/

	switch (iter)
	{
	case 0:/*" ; "*/
		/*write(STDERR_FILENO, ";", 1);
		*write(STDERR_FILENO, "\n", 1);*/
		

		array_Of_Words_semi = _semicolon(string);

		return(array_Of_Words_semi);
	default:
		break;
	}
			return(array_Of_Words_semi);/*Temp*/

}

char ** _semicolon(char *string)
{
	char ** array_Of_Words_semi = NULL;
	array_Of_Words_semi =  _stringTok(string, ";");
	return(array_Of_Words_semi);
}
