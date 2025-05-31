#include <stdio.h>
int main()
{
    int size, i, a[10];
    int postive_count = 0, negative_count = 0;
    printf("\nPlease enter the size of an array: ");
    scanf("%d", &size);
    printf("\nPlease enter the array elements\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < size; i++)
    {
        if (a[i] >= 0)
        {
            postive_count++;
        }
        else
        {
            negative_count++;
        }
    }
    printf("\n Total number of positive number in this array=%d", postive_count);
    printf("\n Total number of negative number in this array=%d", negative_count);
    return 0;
}