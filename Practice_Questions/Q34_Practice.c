/* WAP to check whether a number is strong number or not. */
#include<stdio.h>
int main()
{
    int num,i,j,n,fac,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    num=n;
    while (num>0)
    {
        i=num%10;
        num=num/10;
        j=i;
        fac=1;
        for(;j>0;j--)
        {
            fac=fac*j;
        }
        sum=sum+fac;
    }
    if (sum==n)
    printf("It is a strong number");
    else
    printf("It is not a strong number");
    return 0;
}