#include "main.h"

/**
 *_stat - system call that gets the status of a file.
 *@path: the path ||[] to the file or directory
 *Return: 0 on success, -1 on error.
 */

int _stat(const char *path)
{
	struct stat st;

	/*handle if path is array of strings*/

	if (stat(path, &st) == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}

	return (0);
}
