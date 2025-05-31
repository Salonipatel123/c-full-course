#include <stdio.h>
int main()
{
    char st1[45] = "Joke";
    char *st2 = "For";
    int val = strcmp(st1, st2);
    printf("Now the val  is %d ", val);
    return 0;
}