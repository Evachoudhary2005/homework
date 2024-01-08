//title of program
//program to find the maximum element and index in an array
//header file
#include <stdio.h>
//main function heading
void main() {
// variable (array) declaration
int arr[120];
//assignment of value
int n=0,i=0,max=0,index;
//input statement from user
printf("Enter the number of elements of the array");
scanf("%d",&n);
//for loop statement
for(i=0;i<n;i++)
{
 //output statement
printf("arr[%d]=",i);
scanf("%d",&arr[i]);
}
//assignment of value
max=arr[0];
//for loop statement
for(i=1;i<n;i++)
{
// statement for max element
(arr[i]>max);
//assignment of value
max=arr[i];
index=i;
}
//output statement
printf("Max element =%d\n",max);
printf("Index =%d\n",index );
}
