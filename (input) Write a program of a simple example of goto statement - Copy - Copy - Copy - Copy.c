//title of program
//program of a simple example of goto statement
//header file
#include<stdio.h>
//main function heading
void main()
{
//assignment of value
int i=0;
//loop is starting(statement)
loop_start:
//if statement
if(i<6)
{
//output statement
printf("%d",i);
//increment statement
i++;
//goto loop start (statement)--->closed
goto loop_start;
} 
//output statement for loop finished
printf("\n Loop finished.\n");
}