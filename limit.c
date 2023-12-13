#include<stdio.h>
void display(int)
void main()
{
int limit;
prinf("Enter the limit to print the number:");
scanf("%d",&limit);
display(limit);
}
void display(int x)
{
if(x<0)
return;
else
printf("%d\n",x);
display(x-1);
//printf("%d\n",x);
}
