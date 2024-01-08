//title of program
//program  for printing the address of the value of array
//header file
#include<stdio.h>
//function heading
int main()
{
// array variable declaration
int num[]={2,8,7,6,0};
//intialization of i
int i;
//for statement
for(i=0;i<5;i++)
{
//output statement for printing address of  value of array
printf("\n Array element num [%d]=%d ",i,&num[i]);
//return statement
return 0;
}
}