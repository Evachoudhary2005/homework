//program to print a string reversed.
#include<stdio.h>
#include<string.h>
void main()
{
char str[30];
printf("Enter the string:");
gets(str);
printf("Reverse string is:%s",strrev(str));
}
