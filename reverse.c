//program to print a number reversed.
#include<stdio.h>
void main()
{
int n,rev=0,rem;
printf("Enter an integer number:");
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
rev=rev*10+rem;
n/=10;
}
printf("Reverse number=%d",rev);
}
