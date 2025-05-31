#include <stdio.h>
char *strcpy(char *destination, const char *source)
{
    if (destination == NULL)
    {
        return NULL;
    }
    char *ptr = destination;
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
    return ptr;
}
int main(void)
{
    char source[] = "Techie Delight";
    char destination[25];

    printf("%s\n", strcpy(destination, source));

    return 0;
}