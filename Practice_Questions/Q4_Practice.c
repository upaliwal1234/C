/* WAP to print all even numbers between 1 to n using while loop */
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Even numbers from 1 to %d are:\n" ,n);

    i=2;
    while(i<=n)
    {
        printf("%d\n",i);
        i=i+2;
    }
    return 0;
}