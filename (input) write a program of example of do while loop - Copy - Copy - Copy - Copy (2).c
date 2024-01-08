//title of program
//program of example of do while loop
//header file
#include<stdio.h>
//function heading
void main()
{
//variable declaration and assignment of value
int i=5,j,k;
//input statement from user
printf("Enter the value of j for table to print");
scanf("%d",&j);
// do while statement
do
{
k=i*j;
//output statement
printf("%d*%d=%d\n",i,j,k);
//increment of value of i
++i;
}
while(i>10);
}