#ifndef SHELL_H
#define SHELL_H
#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <errno.h>

extern char **environ;

/** command line functions**/
char *_get_path(char **env);
int _value_path(char **arg, char **env);
char *getline_command(void);
void _getenv(char **env);
char **_get_token(char *lineptr);
void _exit_command(char **args, char *lineptr, int _exit);
int _frk_func(char **arg, char **av, char **env,
char *lineptr, int np, int c);
/** string functions **/
int _strcmp(char *s1, char *s2);
size_t _strncmp(char *s1, char *s2, size_t n);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int _putchar(char c);

#endif
