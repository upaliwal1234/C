// WAP to print multiplication table of any number.
#include<stdio.h>
int main()
{
    int a,n,i;
    printf("Enter a number: ");
    scanf("%d",&a);
    n=a;
    i=1;
    while (i<=10)
    {
        printf("%d*%d=%d\n",n,i,a*i);
        i++;
    }
    return 0;
}