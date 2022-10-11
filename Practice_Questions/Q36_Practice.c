/* WAP to print Fibonacci series up to n terms. */
#include <stdio.h>
int main()
{
    int n, i, x, y, k;
    printf("Enter a number: ");
    scanf("%d", &n);
    x = -1, y = 1, k = 1;
    while (k <= n)
    {
        i = x + y;
        printf("%d ", i);
        x = y;
        y = i;
        k++;
    }
    return 0;
}