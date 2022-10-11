/*Write a c program to check the given number is even or odd using if else conditional statements.
A number is called even number when the number is divisible by 2. If the number is not divisible by 2 
then it is called an odd number*/
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if (a%2==0)
        printf("%d is even",a);
    else
        printf("%d is odd",a);
    return 0;
}