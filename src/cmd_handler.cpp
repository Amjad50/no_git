
#include "cmd_handler.h"

void run_cmd(const std::string &cmd, int argc, char **argv) {
    if(cmd == HELP_CMD) {
        cmd_help(argv[0]);
    }else {
        // no command found matching
        std::cerr << "Command " << cmd << " could not be found.\n" << std::endl;
        cmd_help(argv[0]);
    }
}
