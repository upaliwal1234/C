/* WAP to find sum of all natural numbers between 1 to n.*/
#include<stdio.h>
int main()
{
    int a=1,S,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    S=(n*(n+1))/2;
    printf("Sum of all natural numbers from 1 to %d is: %d",n,S);
    return 0;
}