/* WAP to enter a number and print it in words. */
#include<stdio.h>
int main()
{
    int a,r=1,b,c,q;
    printf("Enter a number: ");
    scanf("%d",&a);
    while (a>0)
    {
        b=a%10;
        a=a/10;
        r=r*10+b;
    }
    
        while(r>1){
        c=r%10;
        r=r/10;

            switch(c)
            {
                case 1:
                printf("One ");
                break;
                case 2:
                printf("Two ");
                break;
                case 3:
                printf("Three ");
                break;
                case 4:
                printf("Four ");
                break;
                case 5:
                printf("Five ");
                break;
                case 6:
                printf("Six ");
                break;
                case 7:
                printf("Seven ");
                break;
                case 8:
                printf("Eight ");
                break;
                case 9:
                printf("Nine ");
                break;
                case 0:
                printf("Zero ");
                break;
            }
        }
    return 0;
}