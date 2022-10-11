/* WAP to check whether a number is Armstrong number or not. */
#include <stdio.h>
#include <math.h>
int main()
{
    int num, a, b, c, i, p, dig;
    printf("Enter a number: ");
    scanf("%d", &num);
    dig = log10(num) + 1;
    a = num;
    i = 0;
    while (a>0)
    {
        b = a % 10;
        a = a / 10;
        c = pow(b, dig);
        i = i + c;
    }
    if (i == num)
        printf("It is armstrong number");
    else
        printf("It is not a armstrong number");

    return 0;
}