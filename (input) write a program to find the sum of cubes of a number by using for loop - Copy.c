//title of program
//program to find the sum of cubes of a number by busing for loop
//header file
#include<stdio.h>
//main function heading
int main()
{
int number,sum=0,digit,cube,i;
//input statement from user
printf("Enter a number:");
scanf("%d",&number);
//finding the sum of cubes of a number by using for loop
for(i=10;i>=0;i++)
{
//get the last digit
digit=number%10;
//statement for calculating cube of a number
cube=digit*digit*digit;
//add the digit to the sum
sum+=cube;
//remove the last digit from the no.
number/=10;
}
//output statement
printf("The sum of cubes of a number is=%d\n",sum);
}