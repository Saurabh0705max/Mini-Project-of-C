#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5;
    int total;
    float percentage;
    char grade;

    // Step 1: Ask user to enter marks
    printf("Enter marks of 5 subjects:\n");

    // Step 2: Read marks
    printf("Subject 1: ");
    scanf("%d", &sub1);

    printf("Subject 2: ");
    scanf("%d", &sub2);

    printf("Subject 3: ");
    scanf("%d", &sub3);

    printf("Subject 4: ");
    scanf("%d", &sub4);

    printf("Subject 5: ");
    scanf("%d", &sub5);

    // Step 3: Calculate total marks
    total = sub1 + sub2 + sub3 + sub4 + sub5;

    // Step 4: Calculate percentage
    percentage = (total / 500.0) * 100;

    // Step 5–8: Assign grade using if-else
    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 75)
        grade = 'B';
    else if (percentage >= 60)
        grade = 'C';
    else if (percentage >= 45)
        grade = 'D';
    else
        grade = 'F';

    // Step 9–10: Display result
    printf("\n----- Student Result -----\n");
    printf("Total Marks: %d / 500\n", total);
    printf("Percentage : %.2f%%\n", percentage);
    printf("Grade      : %c\n", grade);

    return 0;
}