//title of program
//program to check the armstrong numbers between the range set from starting number to ending number
//header file
#include<stdio.h>
#include<math.h>
//main function heading
void main()
{
//variable declaration
int start,end,number,originalnumber,remainder,result,n;
//input from yser
printf("Enter the starting number:");
scanf("%d",&start);
printf("Enter the ending number:");
scanf("%d",&end);
//output statement
printf("Armstrong numbers between %d and %d are:\n",start,end);
//for loop statement
for(number=start;number<=end;++number)
{
//assignment of values
originalnumber=number;
n=0;
result=0;
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
//if statement
{
if(result==number)
{
//output statement
printf("%d\n",number);
}
}
}
}