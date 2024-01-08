//title of program
//program to find the length of the string
//header  file
#include<stdio.h>
//header file for including string in program code
#include<string.h>
//main function heading
void main()
{
//cahr(variable) declaration
char str1[20];
//initializing variable
int strlength;
//input statement from user
printf("Enter the string:\n");
scanf("%s",str1);
//assignment of value
strlength=strlen(str1);
//output statement
printf("Given string length is:%d",strlength);
}