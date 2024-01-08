//title of program
//program of example of nested loop
//header file
#include<stdio.h>
//function heading
int main()
{
//variable declaration
int i,j,rows;
//input statement from user
printf("Enter number of rows:");
scanf("%d",&rows);
//nested loop statement(for loop under another for loop)
for(i=1;i<=rows;++i)
{
for(j=1;j<=i;++j)
{
//output statement
printf("Simran");
}
printf("\n");
}
return 0;
}