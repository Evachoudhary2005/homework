//title of program
//program to check if number is prime number or not
//header file
#include<stdio.h>
//function heading
int main()
{
//variable declaration and assignment of value
int n,i,flag=0;
//input statement from user
printf("Enter a positive integer:");
scanf("%d",&n);
//if condition
if(n==0||n==1)
//assignment of value
flag=1;
//for loop statement
for(i=2;i<=n/2;++i)
{
//if condition
if(n%i==0)
{
//assignment of value
flag=1;
//break statement
break;
}
}
//if condition
if(flag==0)
//output statement
printf("%d is a prime number",n);
//else statement
else
//output statement
printf("%d is not a prime number",n);
//return statement
return 0;
}