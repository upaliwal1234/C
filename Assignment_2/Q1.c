/*Write a program to check whether the candidate is eligible for voting or not by accepting the age value from the user.*/
#include <stdio.h>
int main()
{
    int age;
    printf("Enter the Age of the candidate:\n");
    scanf("%d",&age);
    if (age>=18)
        printf("Candidate is eligible for voting");
    else
        printf("Candidate is not eligible for voting");
    return 0;
}
