/*Write a C program to evaluate the result of a student by accepting marks in three subjects.
If any subject mark is less than 35 then the student is failing. For average greater than equal to 60,
the student is first-class else it is 2nd class. If the student does not fail then also display the total mark and average mark.*/
#include <stdio.h>
int main()
{
    int a,b,c,total;
    float avg;
    printf("Enter marks in three subjects:\n");
    scanf("%d%d%d",&a,&b,&c);
    total=a+b+c;
    avg=total/3.0;
    if (a<35 || b<35 || c<35)
    printf("Fail");
    else if(avg>=60)
    {
        printf("Total marks = %d\naverage marks = %g\n",total,avg);
        printf("The student is first-class");
    }
    else
    {
        printf("Total marks = %d\naverage marks = %g\n",total,avg);
        printf("The student is 2nd class");
    }
    return 0;
}