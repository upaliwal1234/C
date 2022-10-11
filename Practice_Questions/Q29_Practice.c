/* WAP to find all prime factors of a number. */
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number to find it's Prime Factors: ");
    scanf("%d", &num);
    int x = 2;
    while (x <= num)
    {
        if (num % x == 0)
        {
            int n = x;
            int flag = 1;
            for (int i = 2; i <= n / 2; i++)
            {
                if (n % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                printf("%d, ", x);
            }
        }
        x++;
    }
    return 0;
}