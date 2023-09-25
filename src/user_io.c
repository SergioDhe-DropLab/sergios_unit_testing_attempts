#include "stdio.h"

#define ILLEGAL_CHAR ('C')

void get_input_string(char* input)
{
    sscanf(input, "%s");
}

void get_input_int(int* input)
{
    sscanf(&input, "%d");
}

void send_output(char* output)
{
    puts(output);
}