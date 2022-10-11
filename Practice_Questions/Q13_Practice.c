/* WAP to swap first and last digits of a number. */
#include<stdio.h>
#include <math.h>
int main()
{
    int n,dig,b,c,i,k,x,y;
    printf("Enter a number: ");
    //By Utkarsh
    scanf("%d",&n);
    dig=log10(n);
    b=n%10;
    i=n-b;
    while(n>0)
    {
        c=n%10;
        n=n/10;
    }
    x=c*pow(10,dig);
    y=i-x;
    k=b*pow(10,dig)+y+c;
    printf("%d",k);
    return 0;
}