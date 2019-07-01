#include <iostream>

/**
 * main function
 *
 * @param argc number of arguments to the executable
 * @param argv pointer to the first string [char *] of the arguments
 * @return 0 by default
 */
int main(int argc, char **argv) {
    std::cout << argc << " arguments: " << argv[0] << '!' << '\n';
}
