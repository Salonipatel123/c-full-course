#include <stdio.h>
int ten_times(int *a);
int main()
{
    int a = 8;
    int c;
    c = ten_times(&a);
    printf("Thr trn time of a is %d", c);

    return 0;
}
int ten_times(int *a)
{
    int temp;
    temp = 10 * (*a);
    return temp;
}