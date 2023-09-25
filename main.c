#include "src/number_generator.h"
#include "src/number_parser.h"
#include "src/user_io.h"

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv)
{
    num_gen_init();

    // ask for user input
    char message_ask[32] = "what do you want?";
    send_output(message_ask);

    // check if input is "divide"
    char input[32];
    get_input_string(input);
    char expected[32] = "divide";

    if (!strcmp(input, expected)) // chek if divide
    {
        // reply ok, ask for int
        char message_ok[32] = "ok, give me an int";
        send_output(message_ok);

        // get int
        int input_int;
        get_input_int(&input_int);

        float input_float  = (float)input_int;
        float output_float = divide_number(input_float);
        // divide int by random number

        // reply with result
        char output[32];
        sprintf(output, "%f", output_float);
        send_output(output);
    }
    else
    {
        // reply with error
        char message_error[32] = "INVALID COMMAND";
        send_output(message_error);
    }

    return 0;
}