//title of program
//program to find size of array and average calculation based on function with argument with return value
//header file
#include<stdio.h>
//function formation statement
int avg(int[],int);
//main function heading
void main()
{
//variable(array) declaration and assignment of values
int mark[]={77,88,99,88,99};
// declaration of variable
int size,average;
//statement for finding size of array
size=sizeof(mark)/sizeof(mark[0]);
//statement for average calculation
average=avg(mark,size);
//output statement for average calculation
printf("average=%d\n",average);
//output statement for finding size of array
printf("Inside the main fun size of the array(in bytes) is:%d",sizeof(mark));}
//function formation statement
int avg(int mark1[],int size)
{
//variable declaration and assignment of values
int i,sum=0,average=0;
//for loop statement
for(i=0;i<size;i++)
{
//statement foe sum
sum=sum+mark1[i];
//statement for average calculation
average=sum/size;
}
//output statement
printf("Inside the sub fun size of the array (in bytes) is:%d\n",sizeof(mark1));
//return statement for average
return average;
}




