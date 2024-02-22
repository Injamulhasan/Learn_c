#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    // Integral types
    printf("Range of short int: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Range of short unsigned integer is from %d to %d\n", 0, USHRT_MAX);

    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned integer is from %u to %u\n", 0, UINT_MAX);


    printf("Range of long int: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long int: %u to %lu\n", 0, ULONG_MAX);
    // Char type
    printf("Range of char: %d to %d\n", CHAR_MIN, CHAR_MAX);

    // Precision of Floating-point types

    printf("Precision of float: %d digits\n", FLT_DIG);
    printf("Precision of double: %d digits\n", DBL_DIG);
    printf("Precision of long double: %d digits\n", LDBL_DIG);

    return 0;
}
