//title of program
//program to find the perimeter of circle
//header file
#include<stdio.h>
#include<math.h>
//function heading
void main()
{
//variable declaration and assignment of values for rectangle
int l=44, b=56,area;
float r;
//formula for calculating area of rectangle
area=l*b;
//output statement for area of rectangle
printf("the area of rectangle =%d\n",area);
//formula used for calculating radius of circle
r=sqrt(area/3.14);
//variable declaration for circle
float peri;
//formula used for calculating perimeter of circle  
peri=3.14*2*r;
//output statement for perimeter of circle
printf("perimeter of the circle =%f",peri);
}
