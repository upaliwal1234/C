/* WAP to check whether a number is Prime number or not. */
#include <stdio.h>
int main()
{
    int a,b,z=1,x=2,t=0;
    printf("Enter the number:\n");
    scanf("%d",&a);
    while(x<a)
    {
        if(a%x==0)
        {
            t=1;
            printf("No");
            break;
        }
        x++;
    }
    if(t==0)
    printf("Yes");
    return 0;
}