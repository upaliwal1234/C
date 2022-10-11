// WAP to find sum of all odd numbers between 1 to n.
#include<stdio.h>
int main()
{   int a=1,S,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    while (a<=n)
    {
        if(a%2!=0)
        {
        S = S+a;
        }
        a++;
    }
    printf("Sum of all odd numbers from 1 to %d is: %d",n,S);
    
    return 0;
}