#include "shell.h"
/**
 * _getline_command - print "simple_shell$ " and wait for input
 * Return: line of string input for user
 */

char *_getline_command(void)
{
	char *lineptr = NULL;
	size_t shell_user = 0;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "simple_shell$ ", 14);

	if (getline(&lineptr, &shell_user, stdin) == -1)
	{
		free(lineptr);
		return (NULL);
	}
	return (lineptr);
}
