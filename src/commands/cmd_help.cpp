#include "commands/cmd_help.h"

void cmd_help(char *program_name) {
    printf(
            "Usage: %s <command> [<args...>]\n"
            "\n"
            "\thelp\tprint this help page.\n",
            // args
            program_name
            );
}
