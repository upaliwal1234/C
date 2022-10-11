/*Write a program to calculate the net amount by accepting the amount values from the user.
            Amount in $ 	Discount (%)
             >= 1000	    10%
            Otherwise	    5%
*/
#include <stdio.h>
int main()
{
    float am,net1,net2,dis1,dis2;
    printf("Enter Amount in $:\n");
    scanf("%f",&am);
    net1=am+(10*am)/100;
    net2=am+(10*am)/100;
    if (am>=1000)
        printf("Net amount is: $%g",net1);
    else
        printf("Net amount is: $%g",net2);
    return 0;
}