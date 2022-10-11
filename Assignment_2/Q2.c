/*Write a C program to check whether the given number is of multiple of 7 or not.
If the number is divisible by 7 then we can say that the number is multiple of 7 otherwise the number is not multiple of 7.*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if (num%7==0)
        printf("%d is a multiple of 7",num);
    else
        printf("%d is not a multiple of 7",num);
    return 0;
}