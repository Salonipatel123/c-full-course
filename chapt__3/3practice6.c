#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter four number\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
        printf("Max is = %d", a);

    else if (b > c && b > d)
        printf("Max is = %d", b);

    else if (c > d)
        printf("Max is = %d", c);

    else
        printf("Max is = %d", d);
    return 0;
}