//title of program
//program to calculate the sum of array elements
//header file
#include<stdio.h>
//main function heading
void main()
{
//variable declaration
int n;
//input statement from user
printf("Enter the siz of the array");
scanf("%d",&n);
//initializing variable and assignment of value 
int a[n],sum=0;
//input statement from user
printf("Enter array elements");
//for loop statement
for(int i=0;i<n;i++)
{
//statement for storing values
scanf("%d",&a[i]);
//statement for calculating sum of array elements
sum=sum+a[i];
}
//output statement
printf("Sum of array elements=%d",sum);
}