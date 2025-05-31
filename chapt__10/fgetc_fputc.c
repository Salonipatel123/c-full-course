#include <stdio.h>
int main()
{
    // FILE *ptr;
    // ptr = fopen("getcdemo.txt", "r");
    // char c = fgetc(ptr);
    // printf("The value of my character is %c\n", c);
    // return 0;

    // FILE *ptr;
    // ptr = fopen("getcdemo.txt", "r");
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // printf("The value of my character is %c\n", fgetc(ptr));
    // return 0;

    //----->//------->>>    write mode ke liye

    // FILE *ptr;
    // ptr = fopen("putcdemo.txt", "w");
    // putc('c', ptr);

    //<<<<<cherecter by charecter>>>>

    FILE *ptr;
    ptr = fopen("putcdemo.txt", "w");
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
    putc('c', ptr);
}
