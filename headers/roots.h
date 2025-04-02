# include <stdio.h>
# include <stdbool.h>

typedef struct{
    char *file_name;
    int line_number;
} error_id;

typedef struct{
    char *file_name;
    long int bite_size;
    int ls_size;
} file_info;

typedef struct{
    int c_vars, r_errs, e_lcomms, i_files;

} parse_return;

int parse_commands(int n, char *v[], FILE **input, FILE **output, _Bool *flag_v);
