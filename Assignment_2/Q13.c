/* write a program to read a character and find out it is a lower or upper or digit or special character */
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)
        printf("%c is an upper case alphabet",ch);
    else if (ch>=97 && ch<=122)
        printf("%c is an lower case alphabet",ch);
    else
        printf("%c is a special character",ch);
    return 0;
}