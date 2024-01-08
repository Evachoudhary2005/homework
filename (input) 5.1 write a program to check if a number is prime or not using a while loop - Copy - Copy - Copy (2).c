//title of program
//program to check if a number is prime or not using a while loop
//header file
#include<stdio.h>
//main function
int main()
{
//variable declaration and assignment of value
int num,i=1,c=0;
//inputr statement
printf("Enter a number");
scanf("%d",&num);
//while loop statement
while(i<=num)
{
//if else condition
if(num%i==0)
c++;
i++;
}
if(c==2)
printf("\n%d is a prime number",num);
else
printf("\n%d is not a prime number",num);
//return statement
return 0;
}