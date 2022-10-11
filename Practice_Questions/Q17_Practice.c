/* WAP to check whether a number is palindrome or not. */
#include<stdio.h>
int main()
{   
    int a,b,rev=0;
    printf("Enter a number: ");
    scanf("%d",&a);
    int k=a;
    while (a>0)
    {
        b=a%10;
        a=a/10;  
        rev=rev*10+b;
    }
    if (k==rev)
    printf("Number is Palindrome");
    else
    printf("Number is not a palindrome");
    return 0;
}