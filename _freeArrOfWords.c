#include "main.h"

/**
 *_freeArrOfWords - function to execute.
 *@array_Of_Words: the array of inputs
 *Return: void
 */

void _freeArrOfWords(char **array_Of_Words)
{
	int iter;

	if (!array_Of_Words)
		return;

	for (iter = 0; array_Of_Words[iter]; iter++)
	{
		/*printf("main line :%s\n", array_Of_Words[iter]);*/
		free(array_Of_Words[iter]), array_Of_Words[iter] = NULL;
	}
	free(array_Of_Words), array_Of_Words = NULL;
}
