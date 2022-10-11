/* Write a program to check whether the given character is a lowercase alphabet or not. */
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if (ch>=97 && ch<=122)
        printf("%c is an lowercase alphabet",ch);
    else
        printf("%c is not an lowercase alphabet",ch);
    return 0;
}