#include <stdio.h>

int main()
{
    int marks;
    char grade;

    printf("Enter your marks: ");
    scanf("%d", &marks);

    if (marks >= 85 && marks <= 100)
        grade = 'A';
    else if (marks >= 70 && marks <= 84)
        grade = 'B';
    else if (marks >= 53 && marks <= 69)
        grade = 'C';
    else if (marks >= 35 && marks <= 52)
        grade = 'D';
    else
    {
        grade = 'F';
    }

    printf("Your Grade is: %c\n", grade);

    switch (grade)
    {
    case 'A':
        printf("Excellent work!");
        break;

    case 'B':
        printf("Well done");
        break;

    case 'C':
        printf("Good job");
        break;

    case 'D':
        printf("You passed, but you could do better");
        break;

    case 'F':
        printf("Sorry, you failed");
        break;

    default:
        printf("Invalid Grade");
    }
}