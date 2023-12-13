//program for inside and outside the block.
#include<stdio.h>
static int a=50;
void fun1();
void main()
{
//register int a=5;
fun1();
fun1();
fun1();
{
static int a=10;
printf("Inside block 1:%d\n",a);
}
printf("Outside the block in main is:%d\n",a);
}
void fun1()
{
  static int a,b=90;
a=a+3;
b=b-10;
printf("Outside from function fun a is:%d and b is:%d\n",a,b);
a+=10;
}
