/*Q1.Write a C program for calculating the price of a product after adding the sales tax to its original price. 
Where rate of tax and price is inputted by user.*/
#include<stdio.h>
int main()
{
    float tax,op,sp;
    printf("Enter the Original Price and Tax on the product:");
    scanf("%f%f",&op,&tax);
    sp=op+(tax/100*op);
    printf("Price of the product after adding the tax is:%g",sp);
    return 0;
}
