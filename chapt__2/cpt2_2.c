#include <stdio.h>

int main()
{
    int a = 4, b, c;
    b = c = a;

    float d = 1.1;
    float e = d + 8.9;

    printf(" The value of a is %d\n", a);

    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
    printf("The value of c is %d\n", c);

    printf("The value of e is %f\n", e);
    return 0;
}