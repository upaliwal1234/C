/* WAP to print all Armstrong numbers between 1 to n. */
#include<stdio.h>
#include<math.h>
int main()
{
    int num, a, b, c,i,n,z, dig;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i=1; i<=n;i++)
    {
    dig = log10(n) + 1;
    a=i; 
    z=0;
    while (a>0)
    {
        b=a%10;
        a=a/10;
        c=pow(b,dig);
        z=z+c;
    }
    if (z==i)
    printf("%d, ",z);
    }
    return 0;
}