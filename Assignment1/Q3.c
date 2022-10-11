/*Mr. X goes to market for buying some fruits and vegetables.
He is having a currency of Rs 500 with him for marketing.
From a shop, he purchases 2.0 kg Apple priced Rs. 50.0 per kg,
1.5 kg Mango priced Rs.35.0 per kg, 2.5 kg Potato priced Rs.10.0 per kg,
and 1.0 kg Tomato priced Rs.15 per kg. He gives the currency of Rs. 500 to the shopkeeper.
Find out the amount shopkeeper will return to X by writing a C program. */
#include<stdio.h>
int main()
{
    float A,M,P,T,Sum,Return;
    A = 2.0*50.0;
    M = 1.5*35.0;
    P = 2.5*10.0;
    T = 1.0*15;
    Sum=A+M+P+T;
    Return=500-Sum;
    printf("Amout to be returned by the shopkeeper is Rs.%g",Return);
    return 0;
}