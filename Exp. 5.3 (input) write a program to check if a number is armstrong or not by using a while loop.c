//title of program
//program to check if a number is armstrong or not by using a while loop
//header file
#include<stdio.h>
#include<math.h>
//main function heding
int main()
{
//variable declaration and assignment of value
int number,originalnumber,remainder,result=0,n=0;
//input statement from user
printf("Enter an integer:");
scanf("%d",&number);
originalnumber=number;
//while loop statement
while(originalnumber!=0)
{
//remove the last digit from the no.
originalnumber/=10;
//increment statement
++n;
}
//assignment of value
originalnumber=number;
//while loop statement
while(originalnumber!=0)
{
//get the last digit
remainder=originalnumber%10;
//statement for result
result+=pow(remainder,n);
//remove the last digit from the no.
originalnumber/=10;
}
//if else statement
if(result==number)
{
//output statement
printf("%d is an armstrong number\n",number);
}
else
{
//output statement
printf("%d is not an armstrong number\n",number);
}
//return statement
return 0;
}





