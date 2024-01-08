//title of program
//program to calculate sum of digits of a number using a while loop
//header file
#include<stdio.h>
//main function
int main()
{
//variable declaration and assignment of value
int number,sum=0,digit;
//input statement from user
printf("Enter a number");
scanf("%d",&number);
//while loop statement
while(number!=0)
{
//statements for sum of a number 
digit=number%10;
sum+=digit;
number/=10;
}
//output statement
{
printf("Sum of digits=%d\n",sum);
//return statement
return 0;
}
}