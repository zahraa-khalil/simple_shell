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
void exit_bul(char **array_Of_Words, char **argv, int *status, int index);
int _checkBuiltIns(char **array_Of_Words, char **argv, int *status, int index);
void freeArray(char **array_Of_Words, int array_size);
void handleBuiltin(char **array_Of_Words, char **argv, int *status, int index);
void _setenv(char **array_Of_Words, int *status);
/*dataChecks*/
int _atoi(char *string);
int is_positive_number(char *string);


#endif
