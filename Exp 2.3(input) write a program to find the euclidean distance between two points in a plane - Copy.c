//title of program
//program to find the euclidean distance between two points
#include<stdio.h>
#include<math.h>
//function heading
void main()
{
//variable declaration for points
float a,b,c,d;
//output statement for finding distance between two points
printf("enter the points");
//input statement for finding distance between two points
scanf("%f%f%f%f",&a,&b,&c,&d);
//formula used for finding distance between two points
float distance =sqrt(pow((c-a),2)+pow((d-b),2));
//output statement for finding distance between two points
printf("enter the distance=%f",distance);
}

