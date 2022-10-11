// WAP to print all natural numbers from 1 to n.-using while loop
#include<stdio.h>
int main()
{
    int i,n;
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    printf("Natural numbers from 1 to %d are:\n" ,n);

    i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}
