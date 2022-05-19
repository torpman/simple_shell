#include "headers.h"
/**
 * _getline_command - print "simple_shell$ " and wait for input
 * Return: line of string input for user
 */

char *getline_command(void)
{
	char *lineptr = NULL;
	size_t shell_user = 0;

	if (isatty(STDIN_FILENO))
		write(STDOUT_FILENO, "($) ", 4);

	if (getline(&lineptr, &shell_user, stdin) == -1)
	{
		free(lineptr);
		return (NULL);
	}
	return (lineptr);
}
