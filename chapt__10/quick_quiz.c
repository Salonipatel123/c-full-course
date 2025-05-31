#include <stdio.h>
int main()
{
    // FILE *ptr;
    // int num;
    // int num2;
    // ptr = fopen("Harry.txt", "r");
    // if (ptr == NULL)
    // {
    //     printf("This file does not exist\n");
    // }
    // else
    // {
    //     fscanf(ptr, "%d", &num);
    //     fscanf(ptr, "%d", &num2);

    //     printf("The value of num is %d\n", num);
    //     printf("The value of num is %d\n", num2);
    // }

    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("Har3ry.txt", "r");
    if (ptr == NULL)
    {
        printf("This file does not exist\n");
    }
    else
    {
        fscanf(ptr, "%d", &num);
        fscanf(ptr, "%d", &num2);

        printf("The value of num is %d\n", num);
        printf("The value of num is %d\n", num2);
    }
    return 0;
}