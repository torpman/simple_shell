#include "headers.h"
/**
 * _frk_func - function that creates a fork
 * @arg: command and values go here
 * @av: name of prog
 * @env: the environment in
 * @lineptr: user's command line
 * @np: process ID
 * @c: checker to add new test
 * Return: 0 (Success)
 */

int _frk_func(char **arg, char **av, char **env, char *lineptr, int np, int c)
{
	pid_t child;
	int status;
	char *format = "%s: %d: %s: not found\n";

	child = fork();

	if (arg== NULL)
		exit(errno);

	if (child == 0)
	{
		if (execve(arg[0], arg, env) == -1)
		{
			fprintf(stderr, format, av[0], np, arg[0]);
			if (!c)
				free(arg[0]);
			free(arg);
			free(lineptr);
			exit(errno);
		}
	}
	else
	{
		wait(&status);
		if (WIFEXITED(status) && WEXITSTATUS(status) != 0)
			return (WEXITSTATUS(status));
	}
	return (0);
}
