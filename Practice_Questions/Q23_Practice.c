/* WAP to calculate factorial of a number. */
#include<stdio.h>
int main()
{
    int a,i,fac=1;
    printf("Enter a number: ");
    scanf("%d",&a);
    i=a;
    while(i>0)
    {
        fac = fac*i;
        i--;
    }
    printf("Factorial of %d is %d",a,fac);
    return 0;
}