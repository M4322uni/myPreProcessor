#include <stdio.h>
#include <stdlib.h>
#include "headers/roots.h"

int main(int argc, char *argv[]){
    FILE *input, *output = stdout;
    _Bool is_v;
    int c_vars, r_errs, e_lcomms, i_files;

    if (parse_commands(argc, argv, &input, &output, &is_v)) {
        fputs("Wrong command format\n", stderr);
        exit(1);
    }

    return 0;
}
