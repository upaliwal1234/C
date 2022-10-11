/* WAP to print all Prime numbers between 1 to n. */
#include<stdio.h>
int main()
{
    int i,a,j,n; 
    printf("Enter the value of n: \n"); 
    scanf("%d",&n);
    for (i=1;i<=n;i++) 
    { 
        j=0; 
        for (a=1;a<=i;a++) 
        { 
            if (i%a==0) 
            j++; 
        }     
        if (j==2) 
        printf("%d, ",i); 
    } 
    return 0;
}