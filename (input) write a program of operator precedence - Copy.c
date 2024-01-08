//title of program
//program of operator precedence
//header file
#include<stdio.h>
//function heading
 int main()
{
//Variable declaration and assignment of values
int a,b,c;
a=5,b=10,c=15;
//variable declaration for results
int result1,result2,result3,result4;
//input stattements for result1,result2,result3,result4
result1=a+b*c;
result2=(a+b)*c/(a-b);
result3=a-b/c-(a+b);
result4=(a-b)/c;
//output statements for result1,result2,result3,result4
printf("Result of a+b*c=%d\n",result1);
printf("Result of (a+b)*c/(a-b)=%d\n",result2);
printf("Result of a-b/c-(a+b)=%d\n",result3);
printf("Result of(a-b)/c=%d\n"),result4;
}

