//title of program
//program to find the total surface area  and volume of cone
//header file
#include<stdio.h>
#include<math.h>
//function heading
void main()
{
//variable declaration for radius and height
float r,h;
//input statement from user
printf("Enter the radius and height of cone");
scanf("%f%f",&r,&h);
//variable declaration for calculating total surface area and volume of cone
float surfacearea,volume;
//formula used for calculating surface area and volume of cone
surfacearea=3.14*r*(r+sqrt(h*h+r*r));
volume=0.33*(3.14*r*r*h);
//output statement for calculating total surface area and volume of cone
printf("total surface area of cone=%f\n",surfacearea);
printf("volume of cone =%f\n",volume);
}