/*Write a program that prints the floating point value in exponential format correct to two decimal places.
*/
#include<stdio.h>
int main()
{
    float a;
    printf("Enter the floating point value:");
    scanf("%f",&a);
    printf("%0.2e",a);
    return 0;
}