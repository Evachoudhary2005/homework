//title of program
//program to delete the last element of an array
//header file
#include<stdio.h>
//main function heading
void main()
{
//array declaration
int arr[60]={12,34,45,67,78};
//assignment of value
int size=5;
//if else statement
if(size>0)
{
//decrement statement
size--;
//initialization of variable
int newarr[size];
//nested loop statement
for(int i=0;i<size;i++)
{
//assignment of value
newarr[i]=arr[i];
}
//output statement
printf("Updated Array:\n");
for(int i=0;i<size;i++)
{
//output statement
printf("%d\n",newarr[i]);
}
}
else
{
//output statement
printf("Array is already empty");
}
}