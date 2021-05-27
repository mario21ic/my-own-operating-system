//#include <stdio.h>
//#include <sys/types.h>
//#include <unistd.h>

#include "print.h"

void kernel_main() {
    // fork(); // we can't run this

    print_clear();

    print_set_color(PRINT_COLOR_LIGHT_RED, PRINT_COLOR_BLACK);
    print_str("UPC - Operating System\n");

    print_set_color(PRINT_COLOR_YELLOW, PRINT_COLOR_BLACK);
    print_str("Welcome to our 64-bit kernel!\n");

    print_set_color(PRINT_COLOR_LIGHT_GREEN, PRINT_COLOR_BLACK);
    print_str("Let's go");
}
