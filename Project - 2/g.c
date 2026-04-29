#include <stdio.h>
int marks;
int main()
{
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 85 && marks <= 100)
    {
        printf("Your Grade Is A. Excellent Work! You are Eligible For Next Level");
    }
    else if (marks >= 70 && marks <= 84)
    {
        printf("Your Grade Is B. Excellent Work! You are Eligible For Next Level");
    }
    else if (marks >= 53 && marks <= 69)
    {
        printf("Your Grade Is C. Excellent Work! You are Eligible For Next Level");
    }
    else if (marks >= 35 && marks <= 52)
    {
        printf("Your Grade Is D. Excellent Work! You are Eligible For Next Level");
    }
    else
    {
        printf("Fail\n");
    }
}