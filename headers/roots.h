# include <stdio.h>

typedef struct{
    char *file_name;
    int line_number;
} error_id;

typedef struct{
    char *file_name;
    long int bite_size;
    int ls_size;
} file_info;

int parse_commands(int n, char *v[], FILE **input, FILE **output);
//test
