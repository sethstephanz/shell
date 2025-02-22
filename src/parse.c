#include "parse.h"
#include <ctype.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define INPUT_MAX 256
#define MAX_TOKENS 10

int parse_input(char *input) {

    if (sizeof(input) >= INPUT_MAX) {
        return -1;
    }

    char buf[INPUT_MAX];
    char *tokens[MAX_TOKENS] = {0}; // array of pointers, each of which will point to token

    int i = 0;
    char *token = strtok(buf, " ");
    while (token != NULL && i < MAX_TOKENS - 1) {
        tokens[i++] = token;       // store token in array
        token = strtok(NULL, " "); // get next token
    }
    tokens[i] = NULL;

    for (int j = 0; tokens[j] != NULL; j++) {
        printf("Token %d: %s\n", j, tokens[j]);
    }

    return 0;
}