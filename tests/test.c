#include <criterion/criterion.h>
#include "my_pow.h"

Test(my_pow, base_0)
{
    cr_assert_eq(my_pow(0, 5), 0);
}

Test(my_pow, exponent_0)
{
    cr_assert_eq(my_pow(5, 0), 1);
}

Test(my_pow, negative_exponent)
{
    cr_assert_eq(my_pow(5, -5), 0);
}

Test(my_pow, pow_4_5)
{
    cr_assert_eq(my_pow(4, 5), 1024);
}
