//title of program
//program for increment of the value of a variable
//header file
#include<stdio.h>
//function heading
void main()
{
//variable declaration for increment of the value of a variable
int a,b;
// assigning value of a
a=3;
// increment statement
b=a++ + ++a + a++ + ++a;
//output statement
printf("%d",b);
}