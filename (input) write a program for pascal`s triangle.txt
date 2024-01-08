//title of program
//program of Pascal`s Triangle
//header file
#include<stdio.h>
//function heading
int main()
{
//variable declaration and assignment of values
int rows,coef=1,space,i,j;
//input number of rows from user
printf("Enter the number of rows:");
scanf("%d",&rows);
//loop(nested loop) through each row
for(i=0;i<rows;i++)
{
//print spaces before the numbers 
for(space=1;space<=rows-i;space++)
//output statement
printf(" ");
//print numbers in each row
for(j=0;j<=i;j++)
{
//calculate and print the coefficient
if(j==0||i==0)
coef=1;
//else statement
else
coef=coef*(i-j+1)/j;
//output statement
printf("%4d",coef);
//print the coefficient with padding
}
//output statement
printf("\n");
//move to next line for the next row
}
return 0;
}