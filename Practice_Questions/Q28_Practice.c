/* WAP to find sum of all prime numbers between 1 to n. */
#include <stdio.h>
int main()
{
    int i, a, j, n, sum = 0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {
        j = 1;
        for (a = 2; a <= i / 2; a++)
        {
            if (i % a == 0)
                j = 0;
        }
        if (j == 1)
            sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}