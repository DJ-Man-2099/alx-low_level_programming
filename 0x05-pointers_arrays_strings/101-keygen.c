#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int i;
    int randomizer;
    char password[100];

    srand((unsigned int)time(NULL));
    randomizer = rand() % 4;
    for (i = 0; i < 100; i++)
    {
        if (randomizer == 1)
        {
            password[i] = 'A' + rand() % 26;
            randomizer = rand() % 4;
        }
        else if (randomizer == 2)
        {
            password[i] = 'a' + rand() % 26;
            randomizer = rand() % 4;
        }
        else if (randomizer == 3)
        {
            password[i] = '0' + rand() % 10;
            randomizer = rand() % 4;
        }
        else
        {
            password[i] = '!' + rand() % 15;
            randomizer = rand() % 4;
        }
    }
    printf("%s\n", password);
    return (0);
}

