//program for switch case
#include<stdio.h>
void main()
{
int sum=10,n=5;
switch(n)
{
case 1:
sum=sum+9;
break;
case 2:
sum=sum+8;
break;
case 3:
sum=sum+7;
break;
case 4:
sum=sum+6;
break;
default:
sum=sum+5;
break;
}
printf("Sum=%d",sum);
}
