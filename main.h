#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>
#include <errno.h>
#include <sys/wait.h>

extern char **environ;
char *reading_line(void);
void _freeArrOfWords(char **array_Of_Words);
char *_get_path(char *cmd);
int _exec(char *full_command, char **array_Of_Words);
void _error_print(char *file_name, char *command, int index);
int _fork(char **array_Of_Words, char **argv, int index);
char *_itoa(int number);
void _reverse_str(char *string, int length);
char *_strcat(char *dest, char *src);

int _putchar(char c);
void _puts(char *str);
char **_stringTok(char *string, char *delim);
void _strcpy(char *source, char *destination);
char *_strdup(char *source);
char *_strchr(char *s, char c);
char *_strstr(char *haystack, char *needle);
char **_check_operators(char *string);
char **_handle_operator(int iter, char *string);
char **_semicolon(char *string);

int _wait(int status);
int _ppid(void);
int _pid(void);
int _stat(const char *path);
int _whichFile(char *filename[]);
void _environ(char **array_Of_Words, int *status);
void exit_program(char *input);
char *_getenv(char *name);

int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int len);
int isEnv(char *input);
int _isalpha(int c);
void exit_b(char **arOfWsSmi, char **arrOfWs, char **av, int *stus, int index);
int _ckBltIns(char **arOfWsSmi, char **arOfWs, char **av, int *stus, int indx);
void freeArray(char **array_Of_Words, int array_size);
void hdlBltIn(char **arOfWsSmi, char **arOfWs, char **av, int *stus, int indx);
void _setenv(char **array_Of_Words, int *status);
void _unsetenv(char **array_Of_Words);
/*dataChecks*/
int _atoi(char *string);
int is_positive_number(char *string);
#endif
