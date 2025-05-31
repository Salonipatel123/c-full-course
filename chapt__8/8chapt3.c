#include <stdio.h>
#include <string.h>

// 1, number

// int main()
// {
//     char *st = "Harry";
//     int a = strlen(st);
//     printf("The length of string st is %d", a);
//     return 0;
// }

// 2, number

int main()
{
    char *st = "This";
    char st2[45];
    strcpy(st2, st);
    printf("Now the st2 is %s", st2);
    return 0;
}
