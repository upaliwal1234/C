// WAP to print all natural numbers in reverse (from n to 1)-using while loop.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Natural numbers from %d to 1 are:\n" ,n);
    while(n>=1)
    {
        printf("%d\n",n);
        n--;
    }
    return 0;
}