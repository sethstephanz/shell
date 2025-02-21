#ifndef BUILTINS_H
#define BUILTINS_H

int shell_cd(char **args);
int shell_exit(char **args);
int shell_help(char **args);
int execuse_builtin(char **args);

#endif