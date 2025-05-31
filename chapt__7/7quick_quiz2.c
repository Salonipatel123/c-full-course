#include <stdio.h>
int main()
{
    int disp[2][3];
    int i, j;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter value for disp[%d][%d]: ", i, j);
            scanf("%d", &disp[i][j]);
        }
    }
    printf("Two dimensional array elements: \n ");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", disp[i][j]);
            if (i == 2)
            {
                printf("\n");
            }
        }
    }
    return 0;
}