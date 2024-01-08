//title of program
//program to calculate factorial of a number by using indirect recursion
//header file
#include<stdio.h>
//function taking for calculating factorial of a number
int fib(int n)
{
//if else statement
if(n<=1)
//return statement(if part)
return n;
else
//return statement(else part)
return n*fib2(n-1);
}
//function taking for fib2
int fib2(int n)
{
//if else statement
if (n<=1)
//return statement(if part)
return 1;
else
//return statement(else part)
return n*fib(n-1);
}
//main function heading
int main()
{
//variable declaration
int n;
//input statement from user
printf("Enter the number of terms:");
scanf("%d",&n);
//output statement
printf("%d",fib(n));
//result statement
return 0;
}