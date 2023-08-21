#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int password[100];
    int i, totalSum, n;

    totalSum = 0;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        password[i] = rand() % 78;
        totalSum += (password[i] + '0');
        putchar(password[i] + '0');
        if ((2772 - totalSum) - '0' < 78)
        {
            n = 2772 - totalSum - '0';
            totalSum += n;
            putchar(n + '0');
            break;
        }
    }

    return 0;
}

