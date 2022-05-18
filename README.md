# simple_shell


This simple shell project is a project done in collaboration between Ogunmefun Gbenga and Kenny Aturuka. The shell is a simple UNIX command line interpreter that replicates functionalities of the simple shell (sh). It provides an interface between the user and the kernel and executes programs. Additionals functions are also provided.


# Features

1. DIsplay a prompt and wait for the user to type a command.
2. Re-display the prompt each time a command has been executed.
3.  The command lines are simple, no semicolons, no pipes, no redirections, or any other advanced features.
5. Handles Error Messages properly

# Compilation
Shell will be compiled with gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

*Once the compilation is sucessful, you can execute the program with ./shell To exit the program

This simple shell supports all shell commands in the PATH environment like cat', ls`, 'w'.


# Testing  🔨
*Shell will work in interactive mode in the format below:

$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$

* ./hsh and then type the commands that you want to execute
* You can type a command and the prompt appear show again

** Also in non-interactive mode:

$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$

* Echo "command" | ./hsh, command is the command that you want to execute
* Each time that you execute a command, the shell close


# Builtin Commands

This shell supports the next builtin commands:

cd - change directory

env - list the current environment variables

exit - exit the shell

help - show help for a builtin command

pwd - Print the absolute pathname of the current working directory

unsetenv - Remove an environment variable

# Delimit and comment commands
1. ; -  The semicolon. command separator that allows to run a command on a single line placing the semicolon between
   each command.
2. # - The command number. Allows a word beginning with # and all remaining characters on that line to be ignored.

# AUTHORS
This file contains the details of all the individuals that contributed to this shell project
