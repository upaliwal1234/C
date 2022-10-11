/* WAP to find power of a number using for loop. */
#include<stdio.h>
int main()
{
    int a,i,p,x;
    printf("Enter a number: ");
    scanf("%d",&a);
    i=a;
    printf("Enter power: ");
    scanf("%d",&p);
    for (x=1;x<p;x++)
    {
        i = i*a;
        
    }
    printf("%d",i);
    return 0;
}