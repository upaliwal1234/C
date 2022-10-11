/* Wap to find first and last digit of a number. */
#include <stdio.h>
int main()
{
    int a, r;
    printf("Enter a number: ");
    scanf("%d", &a);
    r = a % 10;
    while (a > 10)
    {
        a = a / 10;
    }
    printf("First digit is: %d\n", a);
    printf("Last digit is: %d", r);
    return 0;
}