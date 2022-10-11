/* WAP to check whether a number is Perfect number or not. */
#include <stdio.h>
int main()
{
    int num, n, i, sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    sum = 0;
    for (i = 1; i <= num / 2; i++)
    {
        if (num % i == 0)
            sum = sum + i;
    }
    if (sum == n)
    {
        printf("It is a perfect number");
    }
    else
    {
        printf("It is not a perfect number");
    }
    return 0;
}