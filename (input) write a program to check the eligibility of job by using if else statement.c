//title of program
//program to check the eligibility of job by using if else statement
//header file
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int a;
//input statement from user
printf("Enter your age");
scanf("%d",&a);
//if condition
if(a>=18&&a<=50)
{
//if condition
if(a>=18&&a<=25)
{
//output statement
printf("You are eligible for grade 1 job");
}
//else statement
else
//output statement
printf("You are eligible for grade 2 job");
}
//else statement
else
{
 //output statement
printf("You are not  eligible for the job");
}
}


