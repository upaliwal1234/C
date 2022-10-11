/*Write a program to check whether the given character is an uppercase alphabet or not using the if-else conditional statement in C.
The uppercase letter is from ‘A’ to ‘Z’. The ASCII value of ‘A’ and ‘Z’ are 65 and 90 respectively.
If any character’s ASCII value is within the range of 65 to 90 then it is an uppercase alphabet.*/
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c",&ch);
    if (ch>=65 && ch<=90)
        printf("%c is an uppercase alphabet",ch);
    else
        printf("%c is not an uppercse alphabet",ch);
    return 0;
}