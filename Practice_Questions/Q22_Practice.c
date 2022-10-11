/* WAP to find all factors of a number. */
#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (i=1;i<=num/2;i++)
    {
        if (num%i==0)
        printf("%d, ",i);
    }
    return 0;
}