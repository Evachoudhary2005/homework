//title opf program
//program to print the fibonacci sequence using for loop
//header file
#include<stdio.h>
//function heading
int main()
{
//variable declaration for fibonacci sequence
int first=0,second=1,third,i,n;
//input statement from user
printf("Enter the length of the fibonacci sequence\n");
scanf("%d",&n);
//output statement
printf("The fibonacci series is=\n ");
printf("%d\n%d\n",first,second);
//for loop statement
for(i=2;i<=n;i++){
//statement for result of fibonacci sequence
third=first+second;
//assignment of values
first=second;
second=third;
//output statement 
printf("%d\n",third);
}
return 0;
}