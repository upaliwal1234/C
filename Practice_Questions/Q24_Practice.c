/* WAP to find HCF (GCD) of two numbers. */
#include<stdio.h>
int main()
{   int n1,n2,min,k,i;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);
    min = n1<n2?n1:n2;
    for(i=1; i<=min ; i++)
    {
        if (n1%i==0 && n2%i==0)
        {
            k=i;
        }
    }
    printf("%d",k);
    return 0;
}