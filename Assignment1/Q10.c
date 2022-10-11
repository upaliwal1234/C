/*The population of a city is 30000. It increases by 20 % during first year and 30% during the second year.
Write a program to find the population after two years? (Ans: 46800)*/
#include<stdio.h>
int main()
{
    int a,b,c;
    a = 30000;
    b = (20*a/100)+a;
    c = (30*b/100)+b;
    printf("Population after two years is :%d",c);
    return 0;
}