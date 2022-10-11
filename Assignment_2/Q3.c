/*Write a program to check whether the given number is positive or negative or zero.
If the number is less than zero then the number is positive and if the number is greater than zero then the number is negative.
When both conditions become false then the number is zero.*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if (a>0)
        printf("%d is positive",a);
    else if (a==0)
        printf("%d is equal to 0",a);
    else
        printf("%d is negative",a);
    return 0;
}