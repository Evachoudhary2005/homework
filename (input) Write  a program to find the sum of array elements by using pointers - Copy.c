//title of program
//program to find the sum of array elements by using pointers
//header file
#include<stdio.h>
//main function heading
void main()
{
//variable declaration and assignment of values
int n=5,sum=0;
//taking integer array
int a[]={10,20,30,40,50};
//pointer variable declaration
int*P=&a;
//for loop statement
for(int i=0;i<n;i++)
{
//statement for sum of array elements
sum=sum+(*P);
//increment statement
P++;
}
//output statement
printf("Sum of array elements =%d",sum);
}