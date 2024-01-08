//title of program
//program to give extra marks for good handwriting(apsara pencil)by using simple if
//header file
#include<stdio.h>
//function heading
void main()
{
//variable  declaration
int mark;
//input statement from user
printf("Enter the mark");
scanf("%d",&mark);
//character declaration
char ch;
//output statement
printf("Enter handwriting is good or bad");
//inpuit statement
scanf("%c%c",&ch,&ch);
//condition of simple if
if(ch=='y'||ch=='Y')
{
//statement for increasing marks
mark=mark+10;
}
//output statement 
printf("Your marks are =%d",mark);
}