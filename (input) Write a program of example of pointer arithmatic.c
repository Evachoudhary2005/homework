//title of program
//program of example of pointer arithmatic
//header file
#include<stdio.h>
//main function heading
void main()
{
//assignment of value(variable name)
int i=10;
//taking the address of i and storing in P
int*P=&i;
//increment statement
P++;
//output statements
printf("I=%d\n",i);
printf("I=%d\n",*P);
printf("I=%d\n",P);
}