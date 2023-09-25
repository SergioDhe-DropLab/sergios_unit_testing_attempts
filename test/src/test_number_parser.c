#include "mock_number_generator.h"
#include "number_parser.h"
#include "unity.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_result_is_less_than_1(void)
{
    // arrange
    float input = 10.0;
    generate_number_ExpectAndReturn(5);
    // act
    float result = divide_number(input);

    // assert
    TEST_ASSERT_LESS_OR_EQUAL(1.0, result);
}