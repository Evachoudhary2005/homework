//title of program
//program to calculate addition,subtraction,multiplication,division by using else if ladder
//header file
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int a,b,c;
//input statement from user
printf("Enter two numbers");
scanf("%d%d",&a,&b);
//variable declaration for inputting a value to check the conditions
int x;
//input statement from user for addition,subtraction,multiplication,division
printf("1=addition 2=subtraction 3=Multiplication 4=Division");
//input statement from user 
scanf("%d",&x);
//if condition
if(x==1)
{
//input statement for addition
c=a+b;
//output statement for addition
printf("Addition =%d",c);
}
//elseif condition
else if(x==2)
{
//input statement for subtraction
c=a-b;
//output statement for subtraction
printf("Subtraction =%d",c);
}
//elseif condition
else if(x==3)
{
//input statement for multiplication
c=a*b;
//output statement for multiplication
printf("Multiplication=%d",c);
}
//elseif condition
else if(x==4)
{
//if condition
if(b==0)
{
//output statement
printf("Infinity");
}
//else statement
else
{
//input statement for division
c=a/b;
//output statement for division
printf("Division=%d",c);
}
}
}
