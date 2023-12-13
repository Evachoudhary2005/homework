//program for nested if.
#include<stdio.h>
void main()
{
int age;
printf("Enter the age:");
scanf("%d",&age);
if(age>18&&age<=50)
{
if(age>=18&&age<=25)
{
printf("Eligible for 'A' grade job.");
}
else
{
printf("Eligible for 'B' grade job.");
}
}
else
{
printf("Not eligible for the job.");
}
}
