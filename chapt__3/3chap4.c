#include <stdio.h>

int main()
{
    int age;
    int vippass = 0;
    vippass = 1;

    printf("Enter your age\n");
    scanf("%d", &age);

    if (age <= 70 && age >= 18 || vippass == 1)
    {
        printf("you are age above 18 and below 18 , ypu can drive\n");
    }

    else
    {
        printf("you can not drive");
    }
    return 0;
}