#include <stdio.h>

int main()
{
    float base, hra_percent, da_percent, ta_percent;
    float hra, da, ta, gross;

    printf("Enter Base Salary: ");
    scanf("%f", &base);

    printf("Enter HRA percentage: ");
    scanf("%f", &hra_percent);

    printf("Enter DA percentage: ");
    scanf("%f", &da_percent);

    printf("Enter TA percentage: ");
    scanf("%f", &ta_percent);

    hra = (hra_percent * base) / 100;
    da = (da_percent * base) / 100;
    ta = (ta_percent * base) / 100;

    gross = base + hra + da + ta;

    printf("Gross Salary = %.2f\n", gross);
}