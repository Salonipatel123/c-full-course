#include <stdio.h>
void printAdd(int a)
{
    printf("The address of variable a is %u\n,&a");
}
int main()
{
    int i = 4;
    printf("The value of variable i is %d\n,i");
    printf("The address of variable i is %d\n,&i");

    return 0;
}