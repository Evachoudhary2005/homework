//title of program
//program to find the cube of natural numbers
//header file
#include<stdio.h>
//function heading
int main()
{
//variable declaration and assignment of value
int i=1,cube;
//do while loop statement
do
{
cube=i*i*i;
//incrementing value of i
i=i+1;
//output statement
printf("%d\n",cube);
}
while(i<=10);
}