//title of program
//program of storage class (static variable)
//header file
#include<stdio.h>
//void function heading
void fun();
//main function heading
void main()
{
//int a=10;
//static variable declaration
static int a=56;
//input statement
printf("%d\n",a);
//function heading for checking purpose only
fun();
fun();
//output statement
printf("Hello Welcome To College\n");
//function heading
fun();
}
//void function heading
void fun()
{
//auto variable declaration and assignment of value
static int a=67,b;
//increment statement
b=++a;
//output statement
printf("Coming from fun b=%d\n",b);
}
