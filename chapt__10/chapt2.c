// #include <stdio.h>
// int main()
// {
//     FILE *ptr;
//     int num;
//     ptr = fopen("Harry.txt", "r");
//     fscanf(ptr, "%d", &num);
//     printf("The value of num is %d\n", num);
//     return 0;
// }

#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("Harry.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);

    printf("The value of num is %d\n", num);
    printf("The value of num is %d\n", num2);
    fclose(ptr);
    return 0;
}
