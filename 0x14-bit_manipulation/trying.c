#include <stdio.h>

int main(int argc, char const *argv[])
{
	char *pass = malloc(sizeof(char) * 5);
	char c[5] = {'H', 'o', 'l', 4, '\0'}, run[100];
	int i;

	for (i = 0; c[i]; i++)
		pass[i] = c[i];

	pass[i] = '\0';

	sprintf(run, "echo %s > 101-password", pass);
	system(run);

	return (0);
}
