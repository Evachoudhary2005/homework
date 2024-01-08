//title of program
//program based on extern storage classes
//header file
#include<stdio.h>
//variable(extern) declaration
extern int a=50;
//void fun1() heading
void fun1();
//main function heading
void main()
{
//function heading for checking result purpose only
fun1();
fun1();
fun1();
{
//output statement for inside the block
printf("Inside the block 1=%d\n",a);
}
//output statement for outside the block i.e main
printf("Outside the block i.e main is=%d\n",a);
}
//void function heading
void fun1()
{
//variable(static) declaration
static int a,b=90;
a=a+3;
b=b-10;
//output statement 
printf("Outside from function fun a is=%d and b is=%d\n ",a,b);
//using assignment value
a+=10;
}