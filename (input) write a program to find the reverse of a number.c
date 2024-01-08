//title of program
//program to find the reverse of a number
//header file
#include<stdio.h>
//main function heading
void main()
{
int n,rev=0,rem;
//input statement from user
printf("Enter an integer nuumber");
scanf("%d",&n);
//while loop statement
while(n!=0)
{
//statements for reversing a number
rem=n%10;
rev=rev*10+rem;
n/=10;
}
//output statement
printf("Reverse number=%d",rev);
}