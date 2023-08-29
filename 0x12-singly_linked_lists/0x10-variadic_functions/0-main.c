#include "variadic_functions.h"
#include <stdio.h>

int main(void)
{
    unsigned int sum = sum_them_all(4, 10, 20, 30, 40);
    printf("Sum: %u\n", sum);
    return 0;
}

