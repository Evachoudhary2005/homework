//title of program
//program to find the second largest element in array by not usiong bubble sorting
//header file
#include<stdio.h>
//main function heading
void main()
{
//variable declaration
int n;
//input statement from user
printf("Enter the limit:");
scanf("%d",&n);
//variable(array)declaration
int a[n],i;
//input bstatement from user
printf("Enter array elements:");
//for loop statement
for(i=0;i<n;i++)
//statement for storing values
scanf("%d",&a[i]);
//variable declaration
int big,sbig;
//assignment of values
big=a[0],sbig=a[1];
//if statement
if(big<sbig)
{
//assignment of values
big=a[1];
sbig=a[0];
}
//for loop statement
for(i=2;i<n;i++)
{
//if statement
if(big<a[i])
{
//assignment of value
sbig=big;
big=a[i];
}
//else if statement
else if(sbig<a[i])
//assignment of value
sbig=a[i];
}
//output statement
printf("Second largest element is:%d",sbig);
}