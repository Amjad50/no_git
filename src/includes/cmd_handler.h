
#ifndef NO_GIT_CMD_HANDLER_H
#define NO_GIT_CMD_HANDLER_H

#include <string>
#include <iostream>

#include "commands/cmd_help.h"

// commands
#define HELP_CMD "help"
// TODO: add other commands

/**
 *
 * @param cmd the string of the command (char *) can be casted to (const std::string &)
 * @param argc passing of (argc) from main
 * @param argv passing of (argv) from main
 */
void run_cmd(const std::string &cmd, int argc, char **argv);

#endif //NO_GIT_CMD_HANDLER_H
