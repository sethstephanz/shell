#include "loop.h"
#include "parse.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PROCESS_LIMIT 100
#define MAX_INPUT_SIZE 100

void prompt_user(char *input_buffer) {
    printf("> ");
    fgets(input_buffer, MAX_INPUT_SIZE, stdin);    // read user input
    input_buffer[strcspn(input_buffer, "\n")] = 0; // remove trailing newline from fgets
}

void process_input(char *input) {
    if (strcmp(input, "exit") == 0) {
        return;
    } else {
        if (parse_input(input) < 0) {
            printf("Parsing error: Input too long.\n");
            return;
        }
    }
}

void shell_loop() {
    char input[MAX_INPUT_SIZE];
    while (1) {
        prompt_user(input);
        process_input(input);

        if (strcmp(input, "exit") == 0) {
            break;
        }
    }
}