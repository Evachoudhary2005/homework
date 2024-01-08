//title of program
//program of example of switch case
//header file
#include<stdio.h>
//function heading
void main()
{
//variable declaration and assigning values
int sum,n;
sum=20,n=5;
//switch statement
switch(n)
//cases of switch case
case 1:{
sum=sum+9;
break;
case 2:
sum=sum+8;
break;
case 5:
sum=sum+6;
break;
//default statement
default:
sum=sum-5;
}
//output statement
printf("sum=%d",sum);
}
