#include "src/number_generator.h"
#include "src/number_parser.h"
#include "src/user_io.h"

int main(int argc, char **argv)
{
    num_gen_init();

    //ask for user input
    char message_ask[32] = "what do you want?";
    send_output(message_ask);
    
    //check if input is "divide"
    char input[32];
    get_input_string(input);

    //reply ok, ask for int
    //divide int by random number
    //print int


    return 0;
}