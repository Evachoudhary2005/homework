//program for modular operation.
#include<stdio.h>
void main()
{
int num;
printf("Enter the number:");
scanf("%d",&num);
num=num%2;
printf("Remainder by 2:%d\n",num);
num=num%3;
printf("Remainder by 3:%d\n",num);
num=num%4;
printf("Remainder by 4:%d\n",num);
}
