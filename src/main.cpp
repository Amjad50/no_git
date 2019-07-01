#include <iostream>
#include <cmd_handler.h>
#include "commands/cmd_help.h"

/**
 * main function
 *
 * @param argc number of arguments to the executable
 * @param argv pointer to the first string [char *] of the arguments
 * @return 0 by default
 */
int main(int argc, char **argv) {
    // if there is 1 (file name) arguments or less
    if (argc <= 1) {
        cmd_help(argv[0]);
    }else{
        run_cmd(argv[1], argc, argv);
    }
}
