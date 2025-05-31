#include <stdio.h>

// void printArray(int ptr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("The value of element %d is %d\n", i + 1, ptr[i]);
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 3543, 34, 3, 645, 23};
//     printArray(arr, 7);

void printArray(int ptr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, ptr[i]);
    }
    ptr[2] = 5555; // the value will be change in an array of main as well
}
int main()
{
    int arr[] = {1, 2, 3543, 34, 3, 645, 23};
    printArray(arr, 7);
    printf("%d", arr[2]);

    return 0;
}