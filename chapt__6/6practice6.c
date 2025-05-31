#include <stdio.h>
void swapnum(int var1, int var2)
{
    int tempnum;
    tempnum = var1;
    var1 = var2;
    var2 = tempnum;
}
int main()
{
    int num1 = 35, num2 = 45;
    printf("Befor swapping %d,%d\n", num1, num2);

    swapnum(num1, num2);
    printf("Aefor swapping %d,%d\n", num1, num2);
    return 0;
}