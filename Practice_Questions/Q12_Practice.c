/* WAP to find sum of first and last digit of a number. */
#include<stdio.h>
int main()
{   int a,r,sum;
    printf("Enter a number: ");
    scanf("%d",&a);
    r=a%10;
    while(a>10)
    {
        a=a/10;
    }
    sum=r+a;
    printf("Sum of first and last digit is: %d",sum);
    return 0;
}