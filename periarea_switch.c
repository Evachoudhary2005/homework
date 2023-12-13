//to calculate area and perimeter of circle, square and rectangle using switch case.
#include<stdio.h>
#include<math.h>
void main()
{
int area1,area2,area3,peri1,peri2,peri3;
int c;
printf("1=Circle 2=Square 3=Rectangle");
scanf("%d",&c);
switch(c)
{
case 1:
int r;
printf("Enter the radius of circle:");
scanf("%d",&r);
area1=3.14*r*r;
peri1=2*3.14*r;
printf("Area of circle:%d\n",area1);
printf("Perimeter of circle:%d\n",peri1);
break;
case 2:
int s;
printf("Enter the side of square:");
scanf("%d",&s);
area2=s*s;
peri2=4*s;
printf("Area of square:%d\n",area2);
printf("Perimeter of square:%d\n",peri2);
break;
case 3:
int l,b;
printf("Enter the radius of circle:");
scanf("%d%d",&l,&b);
area3=l*b;
peri3=2*(l+b);
printf("Area of rectangle:%d\n",area3);
printf("Perimeter of rectangle:%d\n",peri3);
break;
default:
printf("INVALID!");
}
}
