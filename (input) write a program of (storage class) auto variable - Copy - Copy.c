//title of program
//program of auto (variable)
//header file
#include<stdio.h>
//void function heading
void fun();
//main function heading
void main()
{
//assignment of value
  int a=30;
// input statement
printf("%d\n",a);
{
//input statement
printf("%d\n",a);
//function heading for checking purpose only
fun();
fun();
fun();
}
}
//assignment of value
int a=90;
//void function heading
void fun()
{
//variable(static) declaration
auto int a=30,b;
//increment statement
b=a++;
//output statement
printf("Coming from fun b=%d\n",b);
}
