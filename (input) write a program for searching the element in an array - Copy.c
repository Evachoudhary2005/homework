//title of program
//proigram for searching the element in an array
//header file
#include<stdio.h>
void main()
{
//array and variable declaration
int arr[10]={2,4,1,7,5,9,3,6,8,10};
//variable declaration and assignment of value
int ele,found=0,i;
//input statement from user
printf("Enter the element to search");
scanf("%d",&ele);
//for loop statement
for(i=0;i<10;i++)
{
//if statement
if(arr[i]==ele)
{
//olutput statement
printf("Element found at the index %d ele %d\n",i,ele);
//assignment of value
found=1;
//break statement
break;
}
}
//if statement
if(!found)
{
//output statement
printf("Element not found in the arary");
}
}
