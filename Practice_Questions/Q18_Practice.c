/* WAP to find frequency of each digit in a given integer. */
#include<stdio.h>
int main()
{
    int num,x,i,a,b,c,d,e,f,g,h,j;
    printf("Enter a number: ");
    scanf("%d",&num);
    while (num>0)
    {
        x=num%10;
        num=num/10;
        switch(x)
        {
            case 0:
            a++;
            break;
            case 1:
            b++;
            break;
            case 2:
            c++;
            break;
            case 3:
            d++;
            break;
            case 4:
            e++;
            break;
            case 5:
            f++;
            break;
            case 6:
            g++;
            break;
            case 7:
            h++;
            break;
            case 8:
            i++;
            break;
            case 9:
            j++;
            break;


        }
    }
    printf("Frequency of 0 is %d\n",a);
    printf("Frequency of 1 is %d\n",b);
    printf("Frequency of 2 is %d\n",c);
    printf("Frequency of 3 is %d\n",d);
    printf("Frequency of 4 is %d\n",e);
    printf("Frequency of 5 is %d\n",f);
    printf("Frequency of 6 is %d\n",g);
    printf("Frequency of 7 is %d\n",h);
    printf("Frequency of 8 is %d\n",i);
    printf("Frequency of 9 is %d\n",j);
    
    return 0;
}