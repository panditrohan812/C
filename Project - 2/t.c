#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score (0-100): ");
    scanf("%d", &score);

    grade = (score >= 0 && score <= 100) ?
            ((score >= 90) ? 'A' :
             (score >= 80) ? 'B' :
             (score >= 70) ? 'C' :
             (score >= 60) ? 'D' :
             (score >= 33) ? 'E' : 'F')
            : 'X';

    (grade == 'X') ? printf("Invalid score! Enter between 0 to 100.\n")
                   : printf("Your grade is: %c\n", grade);
}