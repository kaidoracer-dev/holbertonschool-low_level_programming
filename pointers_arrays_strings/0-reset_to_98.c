#include "main.h"
#include "print_number.c"
#include "_putchar.c"

void reset_to_98(int *n)
{
    print_number(*n);
    _putchar('\n');

    *n = 98;

    print_number(*n);
    _putchar('\n');


}
