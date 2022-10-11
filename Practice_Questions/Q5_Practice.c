//WAP to print all odd numbers between 1 to n.
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Odd numbers from 1 to %d are:\n" ,n);

    i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        i=i+2;
    }
    
    return 0;
}