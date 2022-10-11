//Finding Largest in Three Number
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c)
        printf("%d is largest",a);
    else if (b>c && b>a)
        printf("%d is Largest",b);
    else if (a==b==c)
        printf("All are equal");
    else
        printf("%d is largest",c);
    return 0;
}