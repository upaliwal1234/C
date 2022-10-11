/* WAP to calculate sum of digits of a number. */
#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("Enter a number: ");
    scanf("%d",&a);
    while (a>0)
    {
        b=a%10;
        a=a/10;
        sum=sum+b;
    }    
    printf("Sum of digits of a number is: %d",sum);
    return 0;
}