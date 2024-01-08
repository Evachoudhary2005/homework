/title of program
//program to calculate sum of squares of factorial of a number by using recursion
//header file
#include<stdio.h>
//main function heading
void main()
{
//variable declaration
int num,sum;
int sumofsquares (int);
//input statement from user
printf("Enter the number ");
scanf("%d",&num);
//assignment of value
sum=sumofsquares(num);
//output statement
printf("sum of squares of given number(factorial)=%d",sum);
}
//taking function for calculating sum of squares of factorial a number
int sumofsquares(int n)
{
//if else statement
if(n==1)
//return statement(if part)
return 1;
else
//return statement(else part)
return (n*n)+sumofsquares(n-1);
}
