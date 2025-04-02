#include <stdio.h>
#include <stdlib.h>
#include "headers/roots.h"

int main(int argc, char *argv[]){
    FILE *input, *output = NULL;
    _Bool is_v;
    int c_vars, r_errs, e_comms, i_files;
    if (parse_commands(argc, argv, &input, &output)) {
        fputs("Wrong command format\n", stderr);
        exit(1);
    }

    return 0;
}
