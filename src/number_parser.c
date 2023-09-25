#include "number_generator.h"

float divide_number(float input)
{
    float rand_num;
    rand_num = (float)generate_number();

    return (input / rand_num);
}