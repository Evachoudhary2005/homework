//title of program
//program to find out the length of the string,copy 2 strings,comparison of 2 strings
//header file
#include<stdio.h>
void main()
{
//character(array 'A')declaration
char a[100];
//input statement from user
printf("Enter the string:");
scanf("%[^\n]s",a);
//variable declaration and assignment of value
int i,len=0;
//for loop statement
for(i=0;;i++)
{
//if else statement
if(a[i]=='\0')
//break statement
break;
else
//(length) increment statement
len++;
}
//output statement
printf("Length of the string is=%d\n",len);
//character (array 'B')declaration for copying two arrays
char b[len];
//for loop statement
for(i=0;i<len;i++)
{
//statement for copying two arrays
b[i]=a[i];
}
//output statement
printf("The copied string is %s\n",b);
//variable declaration for comparing two arrays and assignment of value for it
int flag=0;
//for loop statement
for(i=0;i<len;i++)
{
//statements for comparing two arrays
int m=a[i];
int n=b[i];
//if statement
if(m!=n)
{
//assignment of value to variable(flag)
flag=1;
//break statement
break;
}
}
//if else statement for comparing two strings
if(flag==0)
//output statememt(if oart)
printf("The given string is equal\n");
else
//output statement(else part)
printf("The given string is not equal\n");
}