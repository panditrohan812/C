#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter any number: ");
    scanf("%d", &n);

    while (n != 0 || count == 0)
    {
        count++;
        n = n / 10;
    }

    printf("Total number of digits: %d", count);
}