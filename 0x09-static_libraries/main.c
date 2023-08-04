#include "main.h"
#include <stdio.h>

int main(void)
{
    char *david[90];
    _puts("\"At the end of the day, my goal was to be the best hacker\"\n\t- Kevin Mitnick");
    _putchar('a');
    _putchar('\n');
    printf("%d\n", _islower('a'));
    printf("%d\n", _isalpha('5'));
    printf("%d\n", _abs(-10));
    printf("%d\n", _isupper('A'));
    printf("%d\n", _isdigit('A'));
    printf("%d\n", _strlen("abcde"));
    printf("%s\n", _strcpy("david", "abcde"));
    printf("%d\n", _atoi("10"));
    printf("%s\n", _strcat("david", "10"));
    printf("%s\n", _strncat("david", "10", 9));
    printf("%s\n", _strncpy("david", "10", 9));
    printf("%d\n", _strcmp("david", "David"));
    return (0);
}
