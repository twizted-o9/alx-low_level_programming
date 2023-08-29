#include "variadic_functions.h"
#include <stdio.h>

int main(void)
{
    int result1 = sum_them_all(4, 100, 200, 300, 422);
    int result2 = sum_them_all(2, 200, 300);

    printf("%d\n%d\n", result1, result2);

    return 0;
}

