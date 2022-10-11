/* WAP to calculate product of digits of a number. */
#include<stdio.h>
int main()
{
    int a,b,product=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    while (a>0)
    {
        b=a%10;
        a=a/10;
        product=product*b;
    }    
    printf("Sum of digits of a number is: %d",product);
    return 0;
}