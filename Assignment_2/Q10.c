/*Write a C program to check character is an alphabet or not using if-else conditional statements.
ASCII value of A=65 & Z=90
ASCII value of a=97 & z=122
All Values from 65 to 90 or 97 to 122 are an alphabet */
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90 || ch>=97 && ch<=122)
        printf("%c is an alphabet",ch);
    else
        printf("%c is not an alphabet",ch);
    return 0;
}