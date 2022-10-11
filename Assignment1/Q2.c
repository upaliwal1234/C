/*Write a C program to calculate the weekly wages of an employee.
The pay depends on wages per hour and number of hours worked.
Moreover, if the employee has worked for more than 30 hours,
then he or she gets twice the wages per hour, for every extra hour that he or she has worked.
*/
#include<stdio.h>
int main()
{
    int a,b,pay1,pay2,c;
    printf("Enter the wages per hour:");
    scanf("%d",&a);
    printf("Enter the number of hours work done:");
    scanf("%d",&b);
    pay1 = a*b;
    if (b<=30 && b>=0){
    printf("Weekly wages of the employee are:%d",pay1);
    }
    else if (b>30){
    c = b-30;
    pay2 = (30*a) + (2*a*c);
    printf("Weekly wages of the employee are:%d",pay2);
    }
    else
    printf("Wrong Input");
    return 0;
}