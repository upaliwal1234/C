//Finding Largest in Two Number
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    if (a>b)
        printf("%d is largest",a);
    else if (a==b)
        printf("%d is is equal to %d",a,b);
    else
        printf("%d is largest",b);
    return 0;
}