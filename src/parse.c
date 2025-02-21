#include "parse.h"
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trim_whitespace(char *str) {
    int i = 0;
    int j = strlen(str) - 1;

    while (isspace((unsigned char)str[i])) {
        i++;
    }
    while (j >= 0 && isspace((unsigned char)str[j])) {
        j--;
    }

    memmove(str, str + i, j - i + 1);
    str[j - i + 1] = '\0';
}

void parse_input(char *input) {
    trim_whitespace(input);
    printf("Parsing input: \n");
}