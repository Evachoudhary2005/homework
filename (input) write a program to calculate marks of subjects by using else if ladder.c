//title of program
//program to calculate marks of subjects by using else if ladder
//header file
#include<stdio.h>
//function heading
void main()
{
//declaration of subjects
int hindi,english,maths,chemistry,science,total,average;
//character declaration
char grade;
//input statement from user
printf("Enter the marks for hindi, english,maths,chemistry,science,");
scanf("%d%d%d%d%d",&hindi,&english,&maths,&chemistry,&science);
//total (output statement)
total=hindi+english+maths+chemistry+science;
average=total/5;
//if condition
if((average>=90)&&(average<=100))
{
grade='A';
//output statement
printf("You have scored A grade");
}
//else if condition
else if((average>=80)&&(average<=90))
{
grade='B';
//output statement 
printf("You have scopred B grade");
}
//else if condition
else if((average>=70)&&(average<=80))
{
grade='C';
//outputn statement
printf("You have scored C grade");
}
//else if condition
else if((average>=60)&&(average<=70))
{
grade='D';
//output statement
printf("You have scored D grade");
}
//else if condition
else if ((average>=50)&&(average<=60))
{
grade='E';
//output statement
printf("You have scored E grade");}
//else statement
else
{
printf("Fail");
}
}