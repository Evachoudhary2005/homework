//title of program
//program to perform addition of two numbers by using function(without arguments with return type)
//header file
#include<stdio.h>
//main function heading
void main()
{
//function taking for performing addition of two numbers(without arguments)
int add();
//variable declaration(optional)
int c;
//function call statement
c=add();
//output statement
printf("Sum=%d",c);
}
int add()
{
//variable declaration
int x,y;
//input statement from user
printf("Enter two numbers");
scanf("%d%d",&x,&y);
//statement for performing addition
int z=x+y;
//return statement
return z;
}