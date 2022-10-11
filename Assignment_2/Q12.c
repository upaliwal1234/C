/* Read a person/girl’s age and gender. Determine that he/she is eligible for marriage or not.
Eligibility for marriage for boys is 21 years and for girls 18 years.
Sample Input & Outputs:
Enter Gender:- M
Enter Age:- 25
Eligible */
#include <stdio.h>
int main()
{
    int age;
    char g;
    printf("Enter Gender:- ");
    scanf("%c",&g);
    printf("\nEnter Age:- ");
    scanf("%d",&age);
    if (g=='M' && age>=21)
        printf("Eligible");
    else if (g=='F' && age>=18)
        printf("Eligible");
    else
        printf("Not Eligible");
    return 0;
}