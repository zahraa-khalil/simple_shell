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

int _putchar(char c);
void _puts(char *str);
char **_stringTok(char *string, char *delim);
void _strcpy(char *source, char *destination);
char *_strdup(char *source);
int _fork(char **array_Of_Words, char **argv);
int _exec(char **array_Of_Words, char **argv);
int _wait(int status);
int _ppid(void);
int _pid(void);
int _stat(const char *path);
int _whichFile(char *filename[]);
int _environ(void);
void exit_program(char *input);
char *_getenv(char *name);
void _path(char *name, char *delim);
int _strcmp(char *s1, char *s2);
int _strlen(char *s);
int _strncmp(char *s1, char *s2, int len);
int isEnv(char *input);
int _isalpha(int c);
void exit_bul(char **array_Of_Words, char *line);


#endif
