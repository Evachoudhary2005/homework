//program for giving extra marks for good handwriting.
#include<stdio.h>
void main()
{
int marks;
printf("Enter the marks:");
scanf("%d",&marks);
char ch;
printf("Enter handwriting is good or not.");
scanf("%c%c",&ch,&ch);
if(ch=='y'||ch=='Y')
{
marks=marks+10;
}
printf("Yuor marks are:%d",marks);
}
