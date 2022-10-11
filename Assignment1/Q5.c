/* Write a program to read an integer, a character and a float value from keyboard
and display the same in different lines on the screen.*/
#include<stdio.h>
int main()
{
    int a;
    char b;
    float c;
    printf("Enter an integer, a character and a float:");
    scanf("%d",&a);
    scanf("%c",&b);
    scanf("%f",&c);
    printf("%d",a);
    printf("\n%c",b);
    printf("\n%f",c);
    return 0;
}