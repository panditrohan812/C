#include <stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        for (int k = 1; k <= 2 * (5 - i); k++)
        {
            printf("  ");
        }

        for (int p = i; p >= 1; p--)
        {
            printf("%d ", p);
        }

        printf("\n");
    }
}