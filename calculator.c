//calculator using nested if.
#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
int x;
printf("1=Addition 2=Subtraction 3=Multiplication 4=Division");
scanf("%d",&x);
if(x==1)
{
c=a+b;
printf("Sum:%d",c);
}
else if(x==2)
{
c=a-b;
printf("Difference:%d",c);
}
else if(x==3)
{
c=a*b;
printf("Product:%d",c);
}
else 
{
c=a/b;
printf("Divide:%d",c);
}
