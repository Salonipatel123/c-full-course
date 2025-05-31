#include <stdio.h>

int main()
{
    int marks;
    printf("Enter yuor marks");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Wrong Entry");
    }
    else if (marks < 60)
    {
        printf("Gread F");
    }
    else if (marks <= 70 && marks >= 60)
    {
        printf("Grade D");
    }
    else if (marks <= 80 && marks >= 70)
    {
        printf("Grade C");
    }
    else if (marks <= 90 && marks >= 80)
    {
        printf("Grade B");
    }
    else if (marks <= 100 && marks >= 90)
    {
        printf("Grade A");
    }
    return 0;
}