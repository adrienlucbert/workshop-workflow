int my_pow(int base, int exponent)
{
    int result = 1;

    if (exponent == 0)
        return (1);
    while (exponent > 0) {
        result *= base;
        --exponent;
    }
    return (result);
}