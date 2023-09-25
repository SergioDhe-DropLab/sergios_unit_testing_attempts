#include "stdio.h"

#define ILLEGAL_CHAR ('4')

void get_input_string(char* str)
{
    scanf("%s", str);
}

void get_input_int(int* p_input)
{
    scanf("%d", p_input);
}

void send_output(char* output)
{
    puts(output);
}