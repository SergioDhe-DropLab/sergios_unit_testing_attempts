#include "number_generator.h"
#include <stdlib.h>
#include <time.h>


void num_gen_init()
{
    srand(time(NULL));
}

int generate_number()
{
    return rand();
}
