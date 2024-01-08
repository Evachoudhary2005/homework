//title of program
//program by using  bitwise operators
//header file
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int a,b,c;
//assignment of values
a=49,b=35,c=55;
//output statements for bitwise operators
printf("AND gate=%d\n",(a&b));
printf("OR gate=%d\n",(a|b));
printf("XOR gate=%d\n",(a^b));
printf("NOT gate=%d\n",(~a));
printf("left shift=%d\n",(c<<2));
printf("right shift=%d\n",(c>>2));
}