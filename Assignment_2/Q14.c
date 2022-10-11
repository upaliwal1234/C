/* write a program to read  number and find out the number is divisible by 2 and 3 but not 6. */
#include <stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if (a%2==0 && a%3==0)
        printf("%d is divisible by 2 and 3",a);
    else
        printf("%d is not divisible by 2 and 3",a);
    return 0;
}