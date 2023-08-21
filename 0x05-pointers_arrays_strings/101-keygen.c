#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int password[100];
    int i, sum, n;

    sum = 0;

    srand(time(NULL));

    for (i = 0; i < 100; i++)
    {
        password[i] = rand() % 78;
        sum += password[i];
        putchar(password[i] + '0');
        
        if ((2772 - sum) < 78)
        {
            n = 2772 - sum;
            sum += n;
            putchar(n + '0');
            break;
        }
    }

    return 0;
}

