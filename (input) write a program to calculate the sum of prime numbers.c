//title of program
//program to find the sum of prime numbers
//header file
#include<stdio.h>
//function heading
int main()
{
//variable declaration and assignment of value
int i,j,end,isprime,sum=0;
//input statement from user
printf("Enter sum of all prime numbers");
scanf("%d",&end);
//nested loop statement
for(i=2;i<=end;i++)
{
//assignment of value
isprime=1;
for(j=2;j<=i/2;j++)
{
//if condition
if(i%j==0)
{
// assignment of value
isprime=0;
//break statement
break;
}
}
//if condition
if(isprime==1)
{
//output statement for sum of natural numbers
sum+=i;
}
}
//output statement
printf("Sum of all prime numbers between 1 to %d=%d",end,sum);
//return statement
return 0;
}
