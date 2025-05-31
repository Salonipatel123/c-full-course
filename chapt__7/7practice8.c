#include <stdio.h>
int main()
{
    int table[3][10];
    int n;
    printf("Entera number: ");
    scanf("%d", &n);
    int m;
    printf("Entera number: ");
    scanf("%d", &m);
    int p;
    printf("Entera number: ");
    scanf("%d", &p);
    for (int i = 0; i < 10; i++)
    {
        table[0][i] = n * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d= %d\n", n, i + 1, table[0][i]);
    }
    for (int i = 0; i < 10; i++)
    {
        table[0][i] = m * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d= %d\n", m, i + 1, table[0][i]);
    }
    for (int i = 0; i < 10; i++)
    {
        table[0][i] = p * (i + 1);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d * %d= %d\n", p, i + 1, table[0][i]);
    }
    return 0;
}