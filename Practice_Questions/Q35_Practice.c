/* WAP to print all strong numbers between 1 to n. */
#include <stdio.h>
int main()
{
    int t = 0, x = 1;
    printf("Enter a number: ");
    scanf("%d", &t);
    while (x <= t)
    {
        int num, i, j, fac, sum = 0;
        num = x;
        while (num > 0)
        {
            i = num % 10;
            num = num / 10;
            j = i;
            fac = 1;
            for (; j > 0; j--)
            {
                fac = fac * j;
            }
            sum = sum + fac;
        }
        if (sum == x)
        {
            printf("%d ", x);
        }
        x++;
    }
    return 0;
}