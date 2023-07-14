#include <stdio.h>
#include <errno.h>
#include <string.h>
/**
 * main - Entry point
 *
 * it prints exactly
 * 'that piece of art is useful"
 * - Dora Korpar, 2015-10-19,'
 * followed by a new line, to the standard error
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
fprintf(stderr, "and that piece of art is useful\"");
fprintf(stderr, " - Dora Korpar, 2015-10-19\n");
return (1);
}
