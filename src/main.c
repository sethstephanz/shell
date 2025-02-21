#include "loop.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    shell_loop();
    puts("Exiting shell. Goodbye!");
    return EXIT_SUCCESS;
}
