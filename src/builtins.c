#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int shell_cd(char **args);
int shell_exit(char **args);
int shell_help(char **args);
int execute_builtin(char **args);