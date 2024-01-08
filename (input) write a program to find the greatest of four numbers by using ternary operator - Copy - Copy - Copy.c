//title of program
//program to find greatest of four numbers by using ternary operator
//header file
#include<stdio.h>
//function heading
void main()
{
//variable declaration
int a,b,c,d,big;
//input statement from user
printf("Enter four numbers");
scanf("%d%d%d%d",&a,&b,&c,&d);
// condition statement using ternary operator
big=a>b?(a>c?(a>d?a:d):(c>d?c:d)):(b>c?(b>d?b:d):(c>d?c:d));
//output statement
printf(" The greatest number is=%d",big);
}