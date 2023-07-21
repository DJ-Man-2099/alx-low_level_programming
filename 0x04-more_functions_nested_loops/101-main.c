#include "main.h"
#include <limits.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{


    print_number(INT_MAX);
    _putchar('\n');
    print_number_work(INT_MAX);
    _putchar('\n');
    print_number(INT_MIN);
    _putchar('\n');
    print_number_work(INT_MIN);
    _putchar('\n');
    print_number(1000000);
    _putchar('\n');
    print_number(-98);

    return (0);
}
