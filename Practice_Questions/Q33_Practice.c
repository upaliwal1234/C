/* WAP to print all Perfect numbers between 1 to n. */
#include <stdio.h>
int main()
{
    int t = 0;
    printf("Enter a number: ");
    scanf("%d", &t);
    int num = 1;
    while (num <= t)
    {
        int n, i, sum;
        n = num;
        sum = 0;
        for (i = 1; i <= num / 2; i++)
        {
            if (num % i == 0)
                sum = sum + i;
        }
        if (sum == n)
        {
            printf("%d ", n);
        }
        num++;
    }
    return 0;
}